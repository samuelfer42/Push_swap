/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 17:57:17 by safernan           #+#    #+#             */
/*   Updated: 2019/11/06 01:08:23 by safernan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_islow(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

int	ft_toupper(int c)
{
	if (ft_islow(c))
		return (c - 32);
	else
		return (c);
}
