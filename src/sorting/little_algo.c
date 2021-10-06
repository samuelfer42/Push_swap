/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   little_algo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 20:36:27 by safernan          #+#    #+#             */
/*   Updated: 2021/10/06 20:36:28 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_top_max(t_list **lst)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = *lst;
	tmp2 = tmp->next;
	while (tmp2)
	{
		if ((long)tmp->content < (long)tmp2->content)
			return (0);
		tmp2 = tmp2->next;
	}
	return (1);
}

void	micro_sort(t_struct *ps)
{
	if (is_top_max(ps->lst_a))
		reverse_rotate(ps->lst_a, 1, 1);
	if (is_max(ps->lst_a, (*ps->lst_a)->next))
		reverse_rotate(ps->lst_a, 1, 1);
	if ((long)(*ps->lst_a)->content > (long)(*ps->lst_a)->next->content)
		swap(ps->lst_a, 1, 1);
}

void	put_min_top(t_list **lst, int pos)
{
	int	size;

	size = lst_size(lst);
	if (pos > size / 2)
	{
		pos = size - pos;
		while (pos-- != 0)
			reverse_rotate(lst, 1, 1);
	}
	else if (pos <= size / 2)
	{
		while (pos-- != 0)
			rotate(lst, 1, 1);
	}
}

void	mini_sort(t_struct *ps)
{
	int	size;
	int	i;

	i = -1;
	size = lst_size(ps->lst_a);
	while (++i < (size - 3))
	{
		put_min_top(ps->lst_a, get_min_pos(ps->lst_a));
		push(ps->lst_b, ps->lst_a, 0);
	}
	micro_sort(ps);
	while (lst_size(ps->lst_b))
		push(ps->lst_a, ps->lst_b, 1);
}

void	raise_plage(t_struct *ps)
{
	ps->start = ps->min[ps->push];
	if (ps->push + ps->chunck >= ps->size)
		ps->push = ps->size;
	else
		ps->push += ps->chunck;
	ps->end = ps->min[ps->push];
}
