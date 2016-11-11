/*
Milu v3.0 - A Higher Order Mutation Testing Tool

Copyright (c) 2011, Yue Jia
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.
    * Neither the name of the University College London nor the
      names of its contributors may be used to endorse or promote products
      derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL <COPYRIGHT HOLDER> BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#ifndef ASTNODEUTIL_H_
#define ASTNODEUTIL_H_

/**@file
 * Implement utilities for ASTNode.
 */

/**@addtogroup Parser
 * @{
 */

#include <glib.h>
#include "ASTNode.h"
#include "Utility.h"


/**
 * \brief Check if the given node is a prefix increment operator.
 *
 * \param The given node to check.
 *
 * \return TRUE if the given node is a prefix increment operator.
 **/
gboolean is_ASTNode_prefix_increment_op(const ASTNode * node);

/**
 * \brief Check if the given node is a function decl with body.
 *
 * \param The given node to check.
 *
 * \return TRUE if the given node is a function decl with body.
 **/
gboolean is_ASTNode_func_decl_with_body(const ASTNode * node);


/**
 * \brief Check if the given node is a prefix decrement operator.
 *
 * \param The given node to check.
 *
 * \return TRUE if the given node is a prefix decrement operator.
 **/
gboolean is_ASTNode_prefix_decrement_op(const ASTNode * node);


/**
 * \brief Check if the given node is a postfix increment operator.
 *
 * \param The given node to check.
 *
 * \return TRUE if the given node is a postfix increment operator.
 **/
gboolean is_ASTNode_postfix_increment_op(const ASTNode * node);

/**
 * \brief Check if the given node is a postfix decrement operator.
 *
 * \param The given node to check.
 *
 * \return TRUE if the given node is a postfix decrement operator.
 **/
gboolean is_ASTNode_postfix_decrement_op(const ASTNode * node);
/**
 * \brief Check if the given node is a bitwise and operator.
 *
 * \param The given node to check.
 *
 * \return TRUE if the given node is a bitwise and operator.
 **/
gboolean is_ASTNode_bitwise_and_op(const ASTNode * node);

/**
 * \brief Check if the given node is a bitwise or operator.
 *
 * \param The given node to check.
 *
 * \return TRUE if the given node is a bitwise or operator.
 **/
gboolean is_ASTNode_bitwise_or_op(const ASTNode * node);

/**
 * \brief Check if the given node is a binary and assignment operator.
 *
 * \param The given node to check.
 *
 * \return TRUE if the given node is a binary and assignment operator.
 **/
gboolean is_ASTNode_bitwise_and_assignment_op(const ASTNode * node);

/**
 * \brief Check if the given node is a binary or assignment operator.
 *
 * \param The given node to check.
 *
 * \return TRUE if the given node is a binary or assignment operator.
 **/
gboolean is_ASTNode_bitwise_or_assignment_op(const ASTNode * node);

/**
 * \brief Check if the given node is a add operator.
 *
 * \param The given node to check.
 *
 * \return TRUE if the given node is a add operator.
 **/
gboolean is_ASTNode_add_op(const ASTNode * node);

/**
 * \brief Check if the given node is a add assignment operator.
 *
 * \param The given node to check.
 *
 * \return TRUE if the given node is a add assignment operator.
 **/
gboolean is_ASTNode_add_assign_op(const ASTNode * node);


/**
 * \brief Check if the given node is a multiply operator.
 *
 * \param The given node to check.
 *
 * \return TRUE if the given node is a multiply operator.
 **/
gboolean is_ASTNode_multiply_op(const ASTNode * node);

/**
 * \brief Check if the given node is a multiply assignment operator.
 *
 * \param The given node to check.
 *
 * \return TRUE if the given node is a multiply assignment operator.
 **/
gboolean is_ASTNode_multiply_assign_op(const ASTNode * node);

/**
 * \brief Check if the given node is a subtract operator.
 *
 * \param The given node to check.
 *
 * \return TRUE is the given node is a subtract operator.
 **/
gboolean is_ASTNode_subtract_op(const ASTNode * node);

/**
 * \brief Check if the given node is a subtract assignment operator.
 *
 * \param The given node to check.
 *
 * \return TRUE is the given node is a subtract assignment operator.
 **/
gboolean is_ASTNode_subtract_assign_op(const ASTNode * node);


/**
 * \brief Check if the given node is a divide operator.
 *
 * \param The given node to check.
 *
 * \return TRUE is the given node is a divide operator.
 **/
gboolean is_ASTNode_divide_op(const ASTNode * node);

/**
 * \brief Check if the given node is a divide assignment operator.
 *
 * \param The given node to check.
 *
 * \return TRUE is the given node is a divide assignment operator.
 **/
gboolean is_ASTNode_divide_assign_op(const ASTNode * node);


/**
 * \brief Check if the given node is a modulus operator.
 *
 * \param The given node to check.
 *
 * \return TRUE is the given node is a modulus operator.
 **/
gboolean is_ASTNode_modulus_op(const ASTNode * node);

/**
 * \brief Check if the given node is a modulus assignment operator.
 *
 * \param The given node to check.
 *
 * \return TRUE is the given node is a modulus assignment operator.
 **/
gboolean is_ASTNode_modulus_assign_op(const ASTNode * node);


/**
 * \brief Check if the given node is an assign operator.
 *
 * \param The given node to check.
 *
 * \return TRUE is the given node is an assign operator.
 **/
gboolean is_ASTNode_assign_op(const ASTNode * node);

/**
 * \brief Check if the given node is an greater operator.
 *
 * \param The given node to check.
 *
 * \return TRUE is the given node is an greater operator.
 **/
gboolean is_ASTNode_greater_op(const ASTNode * node);

/**
 * \brief Check if the given node is an less operator.
 *
 * \param The given node to check.
 *
 * \return TRUE is the given node is an less operator.
 **/
gboolean is_ASTNode_less_op(const ASTNode * node);

/**
 * \brief Check if the given node is an greater equal operator.
 *
 * \param The given node to check.
 *
 * \return TRUE is the given node is an greater equal operator.
 **/
gboolean is_ASTNode_greater_equal_op(const ASTNode * node);

/**
 * \brief Check if the given node is an less equal operator.
 *
 * \param The given node to check.
 *
 * \return TRUE is the given node is an less equal operator.
 **/
gboolean is_ASTNode_less_equal_op(const ASTNode * node);

/**
 * \brief Check if the given node is an equal operator.
 *
 * \param The given node to check.
 *
 * \return TRUE is the given node is an equal operator.
 **/
gboolean is_ASTNode_equal_op(const ASTNode * node);

/**
 * \brief Check if the given node is an not equal operator.
 *
 * \param The given node to check.
 *
 * \return TRUE is the given node is an not equal operator.
 **/
gboolean is_ASTNode_not_equal_op(const ASTNode * node);



/**
 * \brief Check if the given node is a binary operator.
 *
 * \param The given node to check.
 *
 * \return TRUE is the given node is a binary operator.
 **/
gboolean is_ASTNode_kind_binary_operator(const ASTNode * node);

/**
 * \brief Check if the given node is a Var.
 *
 * \param The given node to check.
 *
 * \return TRUE is the given node is a Var node.
 **/
gboolean is_ASTNode_kind_decl_ref_expr(const ASTNode * node);


/**
 * \brief Check if the given node is a right hand Var.
 *
 * \param The given node to check.
 *
 * \return TRUE is the given node is a right Var node.
 **/
gboolean is_ASTNode_right_hand_var(const ASTNode * node);

/**
 * \brief Check if the given node is a int hand Var.
 *
 * \param The given node to check.
 *
 * \return TRUE is the given node is a int Var node.
 **/
gboolean is_ASTNode_int_var(const ASTNode * node);

/**
 * \brief Check if the given node is a int hand Var.
 *
 * \param The given node to check.
 *
 * \return TRUE is the given node is a int Var node.
 **/
gboolean is_ASTNode_float_var(const ASTNode * node);


/**
 * \brief Check if the given node is a integer.
 *
 * \param The given node to check.
 *
 * \return TRUE is the given node is a integer node.
 **/
gboolean is_ASTNode_kind_integer_literal(const ASTNode * node);

/**
 * \brief Check if the given node is a float.
 *
 * \param The given node to check.
 *
 * \return TRUE is the given node is a float node.
 **/
gboolean is_ASTNode_kind_float_literal(const ASTNode * node);

/**
 * \brief Check if the given node is a if expression node.
 *
 * \param The given node to check.
 *
 * \return TRUE is the given node is a if expression node.
 **/
gboolean is_ASTNode_if_expression(const ASTNode * node);


/**
 * \brief Check if the given node is a while expression node.
 *
 * \param The given node to check.
 *
 * \return TRUE is the given node is a while expression node.
 **/
gboolean is_ASTNode_while_expression(const ASTNode * node);

/**
 * \brief Check if the given node is a compound assign operator.
 *
 * \param The given node to check.
 *
 * \return TRUE is the given node is a compound assign operator.
 **/
gboolean is_ASTNode_kind_compound_assign_operator(const ASTNode * node);

/**
 * \brief Check if the given node is a binary and operator.
 *
 * \param The given node to check.
 *
 * \return TRUE is the given node is a binary and operator.
 **/
gboolean is_ASTNode_and_op(const ASTNode * node);

/**
 * \brief Check if the given node is a binary or operator.
 *
 * \param The given node to check.
 *
 * \return TRUE is the given node is a binary or operator.
 **/
gboolean is_ASTNode_or_op(const ASTNode * node);

/**
 * \brief Set text to the given node.
 *
 * \param The given node to set.
 * \param The given text to set.
 **/
void set_ASTNode_text(ASTNode * node, const gchar * text);

/**
 * \brief Set kind to the given node.
 *
 * \param The given node to set.
 * \param The given kind to set.
 **/
void set_ASTNode_kind(ASTNode * node, NodeKind kind);
/**
 * \brief Check if the given node is the last node of the parent.
 *
 * \param The given node to check.
 *
 * \return TRUE is the given node is the last node.
 **/
gboolean ASTNode_is_last_child(const ASTNode * parent, const ASTNode * node);

/**
 * \brief Check if the given node is the first node of the parent.
 *
 * \param The given node to check.
 *
 * \return TRUE is the given node is the first node.
 **/
gboolean ASTNode_is_first_child(const ASTNode * parent, const ASTNode * node);

/**
 * \brief Get the number of children of the given ASTNode.
 *
 * \param The given node to check.
 *
 * \return The number of children node.
 **/
guint ASTNode_get_children_number(const ASTNode * parent);

/**
 * \brief Create a new if ASTNode
 *
 * \param expr The predicate expression node
 * \param comp The compound statements node
 *
 * \return The if ast node.
 **/
ASTNode * ASTNode_new_if_node(ASTNode * expr, ASTNode * comp);

/**
 * \brief Create a new bop ASTNode
 *
 * \param text The the text of bop
 * \param lop The left operand
 * \param rop The right operand
 *
 * \return The bop ASTNode.
 **/
ASTNode * ASTNode_new_bop_node(gchar * text,  ASTNode * lop, ASTNode * rop);


/**
 * \brief Create a new uop ASTNode
 *
 * \param text The the text of uop
 * \param sub_node The sub expression
 *
 * \return The bop ASTNode.
 **/
ASTNode * ASTNode_new_uop_node(gchar * text, ASTNode * sub_node);


/**
 * \brief Create a new compound statement ASTNode
 *
 *
 * \return The if ASTNode.
 **/
ASTNode * ASTNode_new_comp_stmt_node();


/**
 * \brief Create a new milu src ASTNode
 *
 * \text The given text
 *
 * \return The milu src ASTNode.
 **/
ASTNode * ASTNode_new_milu_src_node(gchar * text);

/**
 * \brief Create a new paren ASTNode
 *
 * \node the child of paren node.
 *
 * \return The paren ASTNode.
 **/
ASTNode * ASTNode_new_paren_node(ASTNode * node);

/**
 * \brief Return the nth child of given node.
 *
 * \param parent The given node to check.
 * \param n The id of the node.
 *
 * \return The nth child node.
 **/

ASTNode * ASTNode_get_nth_child(const ASTNode * parent, guint n);

/**
 * \brief Create a new function ASTNode with empty body
 *
 * and a void type
 *
 *
 * \func_name the function name.
 * \params the parameters node.
 *
 * \return The paren ASTNode.
 **/
ASTNode * ASTNode_new_empty_function_node(gchar * func_name, ASTNode * params);

/**
 * \brief Create a new ParamDecl ASTNode
 *
 * \name the variable name.
 * \type the type of param.
 *
 * \return The paren ASTNode.
 **/
ASTNode * ASTNode_new_parm_decl_node(gchar * name, NodeTypeKind * type);

/**
 * \brief Create a new Integer literal ASTNode
 *
 * \name the variable name.
 * \type the type of param.
 *
 * \return The Integer literal ASTNode.
 **/
ASTNode * ASTNode_new_integer_literal_node( gchar * value);

/**
 * \brief Check if the given node is the root of a null assignment
 *
 * \node The given node to check.
 *
 * \return TRUE if the given node is the root of a null assignment.
 **/
gboolean is_ASTNode_null_assignment(const ASTNode * node);

/**
 * \brief Check if the given node is the root of a calloc call
 *
 * \node The given node to check.
 *
 * \return TRUE if the given node is the root of a calloc call.
 **/
gboolean is_ASTNode_calloc_call(const ASTNode * node);

/**
 * \brief Check if the given node is the root of a malloc call
 *
 * \node The given node to check.
 *
 * \return TRUE if the given node is the root of a malloc call.
 **/
gboolean is_ASTNode_malloc_call(const ASTNode * node);

/**
 * \brief Check if the given node is the root of a calloc call with a cast in front
 *
 * \node The given node to check.
 *
 * \return TRUE if the given node is the root of a calloc call with a cast in front.
 **/
gboolean is_ASTNode_cast_calloc_call(const ASTNode * node);

/**
 * \brief Check if the given node is the root of a malloc call with a cast in front
 *
 * \node The given node to check.
 *
 * \return TRUE if the given node is the root of a malloc call with a cast in front.
 **/
gboolean is_ASTNode_cast_malloc_call(const ASTNode * node);

/**
 * \brief Check if the given node has calloc call in it's children nodes
 *
 * \node The given node to check.
 *
 * \return TRUE if the given node has calloc call in it's children nodes.
 **/
gboolean has_ASTNode_calloc_call(const ASTNode * node);

/**
 * \brief Check if the given node has malloc call in it's children nodes
 *
 * \node The given node to check.
 *
 * \return TRUE if the given node has malloc call in it's children nodes.
 **/
gboolean has_ASTNode_malloc_call(const ASTNode * node);

/**
 * \brief Create a subtree represents NULL
 *
 * \return Root node of a subtree representing NULL.
 **/
ASTNode * ASTNode_new_null_pointer_node();

/**
 * \brief Check if the given node is the root of a calloc call
 *
 * \ori The root of the original subtree.
 * \replace The root of the replacement tree.
 *
 * \return TRUE if the given node is the root of a calloc call.
 **/
gboolean replace_subtree_with(ASTNode * ori, ASTNode * replace);

/**
 * \brief Check if the given node is a sizeof node with a pointer argument
 *
 * \node The given node to check.
 *
 * \return TRUE if the given node is a sizeof node with a pointer argument.
 **/
gboolean is_ASTNode_sizeof_pointer(const ASTNode * node);

/**
 * \brief Check if the given node is a sizeof node with a non-pointer argument
 *
 * \node The given node to check.
 *
 * \return TRUE if the given node is a sizeof node with a non-pointer argument.
 **/
gboolean is_ASTNode_sizeof_nonpointer(const ASTNode * node);

/**
 * \brief Check if the given node is a free() statement
 *
 * \node The given node to check.
 *
 * \return TRUE if the given node is a free() statement.
 **/
gboolean is_ASTNode_free_statement(const ASTNode * node);

/**
 * \brief Create a substitution malloc tree for calloc
 *
 * \left the first argument of original calloc call
 *
 * \right the second argument of original calloc call
 *
 * \return new malloc subtree.
 **/
ASTNode * ASTNode_new_malloc_substitution_for_calloc(ASTNode* left, ASTNode* right);

/**
 * \brief set the node to a null statement node, will lost the children
 *
 * \node The given node to set.
 *
 * \return TRUE.
 **/
gboolean ASTNode_set_null_statement(ASTNode* node);

/**
 * \brief restore the free statement with given children
 *
 * \node the node to be set to a free statement
 *
 * \children free statement's children, well linked with siblings
 *
 * \return TRUE.
 **/
gboolean ASTNode_restore_free_statement(ASTNode* node, ASTNode* children);

/**
 * \brief Create a substitution alloca tree for calloc
 *
 * \left the first argument of original calloc call
 *
 * \right the second argument of original calloc call
 *
 * \return new alloca subtree.
 **/
ASTNode * ASTNode_new_alloca_substitution_for_calloc(ASTNode* left, ASTNode* right);

gboolean is_ASTNode_pointer_op(const ASTNode * node);

#endif /* ASTNODEUTIL_H_ */

/**@}*/
