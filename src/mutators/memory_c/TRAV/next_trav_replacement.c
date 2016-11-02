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


/*static gboolean mutator_milu_next_trav_replacement_node_checking(ASTNode * node)
{
	if(is_ASTNode_add_op(node))
		return TRUE;
	return FALSE;
}

static gboolean mutator_milu_add_arithmetic_replacement_mutate(ASTNode * node, gint type)
{
	switch(type)
	{

		case 1:
			set_ASTNode_text (node, "-");
			return TRUE;
		case 2:
			set_ASTNode_text (node, "*");
			return TRUE;

		case 3:
			set_ASTNode_text (node, "/");
			return TRUE;

		case 4:
			set_ASTNode_text (node, "%");
			return TRUE;

		default:
			break;
	}

	return FALSE;
}

static gboolean mutator_milu_add_arithmetic_replacement_clean(ASTNode * node, gint type)
{
	set_ASTNode_text (node, "+");
	return TRUE;
}*/