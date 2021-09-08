/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   operation_list.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: ngerrets <ngerrets@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/06 13:52:53 by ngerrets      #+#    #+#                 */
/*   Updated: 2021/09/08 11:42:28 by ngerrets      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

char	**operation_list(void)
{
	static char	*oplist[OP_COUNT] =
	{
		[OP_SA] = "sa",
		[OP_SB] = "sb",
		[OP_SS] = "ss",
		[OP_PA] = "pa",
		[OP_PB] = "pb",
		[OP_RA] = "ra",
		[OP_RB] = "rb",
		[OP_RR] = "rr",
		[OP_RRA] = "rra",
		[OP_RRB] = "rrb",
		[OP_RRR] = "rrr"
	};

	return (oplist);
}
