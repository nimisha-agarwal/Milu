#include "Mutator.h"
#include "ASTNodeUtil.h"

static gboolean mutator_milu_replace_root_with_address_node_checking(ASTNode *);
static gboolean mutator_milu_replace_root_with_address_clean(ASTNode * node, gint type);
static gboolean mutator_milu_replace_root_with_address_mutate(ASTNode * node, gint type);


Mutator * mutator_milu_replace_root_with_address()
{
	Mutator * mut = mutator_new("(Memory)Replace root with address", "");
	mut->node_checking = & mutator_milu_replace_root_with_address_node_checking;
	mut->mutate = & mutator_milu_replace_root_with_address_mutate;
	mut->clean = & mutator_milu_replace_root_with_address_clean;
	mut->size = 1;
	return mut;
}


static gboolean mutator_milu_replace_root_with_address_node_checking(ASTNode * node)
{
	if(is_ASTNode_pointer_address_op(node))
		return TRUE;
	return FALSE;
}

static gboolean mutator_milu_replace_root_with_address_mutate(ASTNode * node, gint type)
{
	switch(type)
	{
		case 1: {
			ASTNode * parent = node->parent;
			ASTNode * newparent = ASTNode_new(parent->kind, NULL, parent->cx);
			set_ASTNode_text(newparent, parent->text);

			node->parent = newparent;
			newparent->children = node;

			replace_subtree_with(node, newparent);
			return TRUE;
		}

		default:
			break;
	}

	return FALSE;
}

static gboolean mutator_milu_replace_root_with_address_clean(ASTNode * node, gint type)
{
	ASTNode * parent = node->parent;
	replace_subtree_with(parent, node);
	return TRUE;
}