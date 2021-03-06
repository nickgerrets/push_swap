/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: ngerrets <ngerrets@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/06 12:52:41 by ngerrets      #+#    #+#                 */
/*   Updated: 2021/09/30 11:17:54 by ngerrets      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include "program.h"

static void	operations_free(t_ilist *operations)
{
	t_ilist	*prev;

	while (operations != NULL)
	{
		prev = operations;
		operations = operations->next;
		free(prev);
	}
}

int	main(int argc, char **argv)
{
	t_ilist		*operations;
	t_program	*program;

	if (argc == 1)
		return (0);
	program = program_get();
	program->a = stack_from_argv(argc, argv);
	program->count = program->a->size;
	program->b = stack_create(program->count);
	operations = checker_operations_get();
	checker_operations_perform(operations);
	operations_free(operations);
	if (stack_issorted(program->a) == 1 && program->b->top < 0)
		putstr("OK\n");
	else
		putstr("KO\n");
	program_free();
	return (0);
}
