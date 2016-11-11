#include "MutationOperator.h"


Operator * get_ADDR_operator()
{
	const gchar * name = "ADDR";
	const gchar * info = "Replace root with address";

	Operator * op = mutation_operator_new(name, info);

	g_ptr_array_add(op->mutators, (gpointer)mutator_milu_replace_root_with_address());

	return op;
}