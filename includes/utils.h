/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 20:49:02 by safernan          #+#    #+#             */
/*   Updated: 2021/10/13 18:20:24 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;
/*
** MALLOC
*/
void	*wrmalloc(unsigned long size);
int		wrfree(void *ptr);
void	wrdestroy(void);
/*
** LIST
*/
t_list	*new_lst(void *data);
void	lst_push_front(t_list **lst, t_list *elem);
void	lst_push_back(t_list **lst, t_list *elem);
t_list	*lst_get_last(t_list **lst);
int		lst_size(t_list **lst);
void	lst_clear(t_list **lst);
t_list	**lst_dup(t_list **lst);
/*
** EXIT
*/
void	ft_exit(char *string, int code);
/*
** STR
*/
int		ft_strlen(char *s);
int		is_alpha(char c);
int		is_digit(char c);
char	**ft_split(char const *s, char c);
long	ft_atol(char *s);
int		ft_strcmp(char *s1, char *s2);
#endif