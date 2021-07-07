/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 18:28:43 by safernan          #+#    #+#             */
/*   Updated: 2021/05/23 18:28:46 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*new_lst(void *data)
{
	t_list	*elem;

	elem = wrmalloc(sizeof(t_list));
	elem->content = data;
	elem->next = NULL;
	return (elem);
}

void	lst_push_front(t_list **lst, t_list *elem)
{
	if (!lst)
	{
		*lst = elem;
		return ;
	}
	elem->next = *lst;
	*lst = elem;
}

void	lst_push_back(t_list **lst, t_list *elem)
{
	if (!elem || !lst)
		return ;
	else if ((*lst) == NULL)
		(*lst) = elem;
	else
		lst_push_back(&(*lst)->next, elem);
}

int	lst_size(t_list **lst)
{
	t_list	*tmp;
	int		i;

	tmp = *lst;
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

void	lst_clear(t_list **lst)
{
	t_list	*prev;

	while (*lst)
	{
		prev = *lst;
		*lst = (*lst)->next;
		wrfree(prev);
	}
	*lst = NULL;
}
