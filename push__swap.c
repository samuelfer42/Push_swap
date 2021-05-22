/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push__swap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 13:16:12 by safernan          #+#    #+#             */
/*   Updated: 2021/05/22 14:07:37 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int push(int argc, char **argv);
int nombreoupas(char *nombre);
int	ft_isdigit(int c);

int		push(int argc, char **argv)
{
	int		ac;
	int 	size;

	
	ac = argc -2;
	while (ac >= 0)
	{
		if (nombreoupas(argv[ac]))
		{
			printf("%s", argv[ac]);
			printf("\n");
		}
		else
		{
			printf("%s, n'est pas un argument valide", argv[ac]);
			return (0);
		}
		ac--;

	}
	return (1);
}

int 	nombreoupas(char *nombre)
{
	int		i;

	i = 0;
	while(nombre[i])
	{
		if (!ft_isdigit(nombre[i]) && (nombre[i] != '-'))
			return (0);
		i++;
	}
	return (1);
}

int		ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}


int main (int argc, char **argv)
{
	if (argc < 2)
	{
		printf("Manque des arguments");
		return (-1);
	}
	push(argc, argv + 1);
	return (1);
}
