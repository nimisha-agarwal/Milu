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
	return is_ASTNode_function_parameter(node);
}

static gboolean mutator_milu_replace_malloc_with_alloca_mutate(ASTNode * node, gint type)
{
	switch(type)
	{
		case 1:
			if(is_ASTNode_malloc_call(node)){
				ASTNode_set_text(node, "alloca");
				ASTNode_set_text(node->children, "alloca");
				ASTNode_set_text(node->children->children, "alloca");
			}
			else{
				ASTNode_set_text(node->children->next_sibling, "alloca");
				ASTNode_set_text(node->children->next_sibling->children, "alloca");
			}
			return TRUE;

		default:
			break;
	}

	return FALSE;
}

static gboolean mutator_milu_replace_malloc_with_alloca_clean(ASTNode * node, gint type)
{
	if(is_ASTNode_malloc_call(node)){
		ASTNode_set_text(node, "malloc");
		ASTNode_set_text(node->children, "malloc");
		ASTNode_set_text(node->children->children, "malloc");
	}
	else{
		ASTNode_set_text(node->children->next_sibling, "malloc");
		ASTNode_set_text(node->children->next_sibling->children, "malloc");
	}
	return TRUE;
}