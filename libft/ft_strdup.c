/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 19:18:44 by safernan           #+#    #+#             */
/*   Updated: 2019/11/06 01:05:26 by safernan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*res;
	int		count;

	count = 0;
	if (!(res = malloc(sizeof(*s) * (ft_strlen(s) + 1))))
		return (NULL);
	while (s[count])
	{
		res[count] = s[count];
		count++;
	}
	res[count] = 0;
	return (res);
}
