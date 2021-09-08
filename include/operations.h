/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   operations.h                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ngerrets <ngerrets@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/07/15 14:23:36 by ngerrets      #+#    #+#                 */
/*   Updated: 2021/09/08 11:10:16 by ngerrets      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATIONS_H
# define OPERATIONS_H

# include "stack.h"

typedef enum e_operation
{
	OP_SA = 0,
	OP_SB,
	OP_SS,
	OP_PA,
	OP_PB,
	OP_RA,
	OP_RB,
	OP_RR,
	OP_RRA,
	OP_RRB,
	OP_RRR,
	OP_COUNT
}	t_operation;

char		**operation_list(void);
void		operation_swap(t_stack *stack);
void		operation_push(t_stack *from, t_stack *to);
void		operation_rotate(t_stack *stack);
void		operation_rotate_reverse(t_stack *stack);

#endif
