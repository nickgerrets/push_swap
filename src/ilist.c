/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ilist.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: ngerrets <ngerrets@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/08 12:20:45 by ngerrets      #+#    #+#                 */
/*   Updated: 2021/09/30 11:09:32 by ngerrets      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ilist.h"

t_ilist	*ilst_new(int content)
{
	t_ilist	*element;

	element = (t_ilist *)malloc(sizeof(t_ilist));
	if (element == NULL)
		return (NULL);
	element->i = content;
	element->next = NULL;
	return (element);
}

t_ilist	*ilst_last(t_ilist *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

void	ilst_add_back(t_ilist **lst, t_ilist *element)
{
	t_ilist	*last;

	if (lst == NULL)
		return ;
	last = ilst_last(*lst);
	if (last != NULL)
		last->next = element;
	else
		*lst = element;
}

void	ilst_destroy_element(t_ilist *element)
{
	if (element)
		free(element);
}

void	ilst_destroy(t_ilist *lst)
{
	t_ilist	*next;

	while (lst != NULL)
	{
		next = lst->next;
		free(lst);
		lst = next;
	}
}
