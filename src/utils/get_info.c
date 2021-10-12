/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_info.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 20:45:56 by safernan          #+#    #+#             */
/*   Updated: 2021/10/12 14:38:16 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_max(t_list **lst, t_list *max)
{
	t_list	*tmp;

	tmp = *lst;
	while (tmp)
	{
		if (tmp != max && (long)tmp->content > (long)max->content)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

int	is_min(t_list **lst, t_list *min)
{
	t_list	*tmp;

	tmp = *lst;
	while (tmp)
	{
		if (tmp != min && (long)tmp->content < (long)min->content)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

long	get_max(t_list **lst)
{
	t_list	*tmp;

	tmp = *lst;
	while (tmp)
	{
		if (is_max(lst, tmp))
			return ((long)tmp->content);
		tmp = tmp->next;
	}
	return (0);
}

long	get_min(t_list **lst)
{
	t_list	*tmp;

	tmp = *lst;
	while (tmp)
	{
		if (is_min(lst, tmp))
			return ((long)tmp->content);
		tmp = tmp->next;
	}
	return (0);
}

int	get_min_pos(t_list **lst)
{
	t_list	*tmp;
	int		i;

	i = -1;
	tmp = *lst;
	while (tmp)
	{
		++i;
		if (is_min(lst, tmp))
			return (i);
		tmp = tmp->next;
	}
	return (i);
}
