/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_ref.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 20:38:11 by safernan          #+#    #+#             */
/*   Updated: 2021/10/06 20:38:12 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	*sort_long_tab(t_struct *ps, int i)
{
	long	*min;
	t_list	*temp;
	long	tmp;

	min = wrmalloc((lst_size(ps->lst_a) + 1) * sizeof(long));
	temp = *(ps->lst_a);
	while (temp)
	{
		min[++i] = (long)temp->content;
		temp = temp->next;
	}
	i = 0;
	while (i < ps->size - 1)
	{
		if (min[i] > min[i + 1])
		{
			tmp = min[i];
			min[i] = min[i + 1];
			min[i + 1] = tmp;
			i = 0;
		}
		else
			i++;
	}
	return (min);
}
