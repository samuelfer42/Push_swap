/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 20:33:08 by safernan          #+#    #+#             */
/*   Updated: 2021/10/06 20:33:10 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list **lst, int aff, int type)
{
	t_list	*tmp;

	if (lst_size(lst) < 2)
		return ;
	tmp = *lst;
	tmp = tmp->next;
	(*lst)->next = tmp->next;
	tmp->next = (*lst);
	*lst = tmp;
	if (aff)
	{
		if (type)
			print_stack("sa");
		else
			print_stack("sb");
	}
}

void	double_swap(t_struct **ps, int aff)
{
	swap((*ps)->lst_a, 0, 0);
	swap((*ps)->lst_b, 0, 0);
	if (aff)
		print_stack("ss");
}
