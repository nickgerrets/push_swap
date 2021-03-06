/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   stack_operations.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: ngerrets <ngerrets@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/07/15 13:56:36 by ngerrets      #+#    #+#                 */
/*   Updated: 2021/09/30 10:55:12 by ngerrets      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

/*
**	Swap the first 2 elements at the top of given stack. Do nothing if there
**	is only one or no elements).
*/
void	stack_swap(t_stack *stack)
{
	int	temp;

	if (stack->top < 1)
		return ;
	temp = stack->numbers[stack->top];
	stack->numbers[stack->top] = stack->numbers[stack->top - 1];
	stack->numbers[stack->top - 1] = temp;
}

/*
**	take the first element at the top of FROM and put it at the top of TO. Do
*	nothing if FROM is empty
*/
void	stack_pushto(t_stack *from, t_stack *to)
{
	int	temp;

	if (from->top < 0)
		return ;
	temp = stack_pop(from);
	stack_push(to, temp);
}

/*
**	shift up all elements of the stack by 1. First element becomes the last one.
*/
void	stack_rotate(t_stack *stack)
{
	int	top_element;
	int	i;

	if (stack->top == -1)
		return ;
	top_element = stack->numbers[stack->top];
	i = 0;
	while (i < stack->top)
	{
		stack->numbers[stack->top - i] = stack->numbers[stack->top - i - 1];
		i++;
	}
	stack->numbers[0] = top_element;
}

/*
**	shift down all elements of the stack by 1. Last element becomes the first one.
*/
void	stack_rotate_reverse(t_stack *stack)
{
	int	bottom_element;
	int	i;

	bottom_element = stack->numbers[0];
	i = 0;
	while (i < stack->top)
	{
		stack->numbers[i] = stack->numbers[i + 1];
		i++;
	}
	stack->numbers[stack->top] = bottom_element;
}
