/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 20:35:53 by safernan          #+#    #+#             */
/*   Updated: 2021/10/06 20:35:55 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sort(t_struct *ps)
{
	t_list	*tmp;

	tmp = *(ps->lst_a);
	if (lst_size(ps->lst_b))
		return (0);
	while (tmp->next)
	{
		if ((long)tmp->content > (long) tmp->next->content)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}
