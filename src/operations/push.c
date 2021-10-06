/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 20:31:13 by safernan          #+#    #+#             */
/*   Updated: 2021/10/06 20:31:17 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_list **dest, t_list **src, int type)
{
	t_list	*tmp;

	if (!lst_size(src))
		return ;
	tmp = new_lst((*src)->content);
	(*src) = (*src)->next;
	lst_push_front(dest, tmp);
	if (type)
		print_stack("pa");
	else
		print_stack("pb");
}
