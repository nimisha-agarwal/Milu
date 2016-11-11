#include "Mutator.h"
#include "ASTNodeUtil.h"

static gboolean mutator_milu_next_trav_replacement_node_checking(ASTNode *);
static gboolean mutator_milu_next_trav_replacement_clean(ASTNode * node, gint type);
static gboolean mutator_milu_next_trav_replacement_mutate(ASTNode * node, gint type);


Mutator * mutator_milu_next_trav_replacement()
{
	Mutator * mut = mutator_new("Traversal next", "");
	mut->node_checking = & mutator_milu_next_trav_replacement_node_checking;
	mut->mutate = & mutator_milu_next_trav_replacement_mutate;
	mut->clean = & mutator_milu_next_trav_replacement_clean;
	mut->size = 1;
	return mut;
}


static gboolean mutator_milu_next_trav_replacement_node_checking(ASTNode * node)
{
	if(is_ASTNode_pointer_op(node))
		return TRUE;
	return FALSE;
}

static gboolean mutator_milu_next_trav_replacement_mutate(ASTNode * node, gint type)
{
	switch(type)
	{
		case 1:
			//ASTNode * leftchild = node->children;
			/*ASTNode * rightchild = node->children->next_sibling;
			ASTNode * nextchild = ASTNode_new(rightchild->kind, ,rightchild->cx);
			set_ASTNode_text(newnode, "next");
			ASTNode * newnode = ASTNode_new(node->kind, ,node->cx)
			set_ASTNode_text(newnode, "->");
			newnode->children = node;
			node->parent = newnode;
			node->next_sibling = nextchild;
			nextchild->prev_sibling = node;
			nextchild->parent = newnode;*/
			//ASTNode_replace(leftchild, newnode);
			ASTNode * newnode = ASTNode_new(node->kind, ,node->cx);
			ASTNode * nodechild = node->children;
			ASTNode * newchildren = ASTNode_new(nodechild->kind, ,nodechild->cx);
			ASTNode * nodechildsibling = nodechild->next_sibling;
			ASTNode * newsibling = ASTNode_new(nodechildsibling->kind, ,nodechildsibling->cx);

			set_ASTNode_text(newnode, node->text);
			newnode->children = newchildren;

			set_ASTNode_text(newchildren, nodechild->text);
			newchildren->parent = newnode;
			newchildren->next_sibling = newsibling;

			set_ASTNode_text(newsibling, nodechildsibling->text);
			newsibling->parent = newnode;
			newsibling->prev_sibling = newchildren;

			replace_subtree_with(nodechild, newnode);

			return TRUE;

		default:
			break;
	}

	return FALSE;
}

static gboolean mutator_milu_next_trav_replacement_clean(ASTNode * node, gint type)
{
	ASTNode * children = node->children->children;
	replace_subtree_with(node->children, children);
	return TRUE;
}