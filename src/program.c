/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   program.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ngerrets <ngerrets@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/08 17:19:59 by ngerrets      #+#    #+#                 */
/*   Updated: 2021/09/08 17:36:33 by ngerrets      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "program.h"

static t_program	*program_alloc(void)
{
	t_program	*program;

	program = malloc(sizeof(t_program));
	if (program == NULL)
		error(ERR_MALLOC);
	program->a = NULL;
	program->b = NULL;
	program->count = 0;

	return (program);
}

t_program	*program_get(void)
{
	static t_program	*program = NULL;

	if (program == NULL)
		program = program_alloc();
	return (program);
}