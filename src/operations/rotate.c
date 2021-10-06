/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 20:32:38 by safernan          #+#    #+#             */
/*   Updated: 2021/10/06 20:32:39 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_list **lst, int aff, int type)
{
	t_list	*tmp;

	if (lst_size(lst) < 2)
		return ;
	tmp = *lst;
	*lst = tmp->next;
	tmp->next = NULL;
	lst_push_back(lst, tmp);
	if (aff)
	{
		if (type)
			print_stack("ra");
		else
			print_stack("rb");
	}
}

void	reverse_rotate(t_list **lst, int aff, int type)
{
	t_list	*tmp;
	t_list	*tmp2;

	if (lst_size(lst) < 2)
		return ;
	tmp = lst_get_last(lst);
	tmp2 = *lst;
	while (tmp2->next != tmp)
		tmp2 = tmp2->next;
	tmp2->next = NULL;
	lst_push_front(lst, tmp);
	if (aff)
	{
		if (type)
			print_stack("rra");
		else
			print_stack("rrb");
	}
}

void	double_rotate(t_struct **ps, int aff)
{
	rotate((*ps)->lst_a, 0, 0);
	rotate((*ps)->lst_b, 0, 0);
	if (aff)
		print_stack("rr");
}

void	double_rev_rotate(t_struct **ps, int aff)
{
	reverse_rotate((*ps)->lst_a, 0, 0);
	reverse_rotate((*ps)->lst_b, 0, 0);
	if (aff)
		print_stack("rrr");
}

