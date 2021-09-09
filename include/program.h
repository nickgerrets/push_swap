/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   program.h                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ngerrets <ngerrets@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/08 17:18:04 by ngerrets      #+#    #+#                 */
/*   Updated: 2021/09/09 16:47:49 by ngerrets      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROGRAM_H
# define PROGRAM_H

# include "stack.h"
# include "nerror.h"
# include <stddef.h>
# include <stdlib.h>

typedef struct s_program
{
	int		count;
	t_stack	*a;
	t_stack	*b;
}			t_program;

t_program	*program_get(void);
void		program_free(void);

#endif
