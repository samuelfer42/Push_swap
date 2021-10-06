/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_two.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 20:39:07 by safernan          #+#    #+#             */
/*   Updated: 2021/10/06 20:39:08 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*lst_get_last(t_list **lst)
{
	t_list	*tmp;

	tmp = *lst;
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}
