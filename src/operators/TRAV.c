#include "MutationOperator.h"


Operator * get_TRAV_operator()
{
	const gchar * name = "TRAV";
	const gchar * info = "Do next node mutation";
	Operator * op = mutation_operator_new(name, info);

	g_ptr_array_add(op->mutators, (gpointer)mutator_milu_next_trav_replacement());

	return op;
}