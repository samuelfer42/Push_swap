/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 00:29:19 by safernan           #+#    #+#             */
/*   Updated: 2019/11/06 01:01:49 by safernan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*res;
	size_t			count;

	res = (unsigned char *)s;
	count = 0;
	while (count < n)
	{
		*res++ = 0;
		count++;
	}
}
