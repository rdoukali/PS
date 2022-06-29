/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdoukali <rdoukali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 19:52:49 by rdoukali          #+#    #+#             */
/*   Updated: 2022/06/29 20:11:04 by rdoukali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "get_next_line.h"

typedef struct s_list
{
	int					data;
	struct s_list		*next;
}					t_list;

int		count_all(int ac, char **av);
int		iss_digit(char *str);
int		*fill_in(int size, char **av);
void	ft_error(int *c);
int		ft_atoi(char *str);
int		*tab_dup(int *tab, int *size);
int		ft_atoi(char *str);
int		*fill_tab(char **av, int size);
void	swap(int *a, int *b);
void	sa_c(int *tab, int *size);
void	sb_c(int *tab, int *size);
void	ss_c(int *tab1, int *tab2, int *size1, int *size2);
void	pa_c(int *tab1, int *tab2, int *s1, int *s2);
void	pb_c(int *tab2, int *tab1, int *s2, int *s1);
void	ra_c(int *tab, int *size);
void	rb_c(int *tab, int *size);
void	rr_c(int *tab1, int *tab2, int *s1, int *s2);
void	rra_c(int *tab, int *size);
void	rrb_c(int *tab, int *size);
void	rrr_c(int *tab1, int *tab2, int *s1, int *s2);
int		count(char *str);
int		*fill_all(char *av, int *size);
int		a_order(int *a, int *s);
int		*sort_tab(int *tab, int *s1);
int		*sort_rev(int *a, int *s1);
void	check_dup(int *tab, int *size);
int		after_med(int *a, int *s1, int sort);
void	order(int *a, int *size);
int		*tab_join(int *tab1, int *tab2, int *s1, int *s2);
int		medi(int *a, int *s);
t_list	*sort_lst(int *sort, int s_s, int s_e);
int		check_sort_lst(int *a, int *s1, t_list *sort, int *s5);
int		sort_after_lst(int *a, int *s1, t_list *sort, int *s3);
int		search_lst(int a, t_list *sort, int *s5);
int		lst_index(t_list *lst, int n);
void	sort_check(int *a, int *b, int *s1, int *s2);
void	all_move(int *a, int *b, int *s1, int *s2);
void	ft_ko(int *c);
int		str_cmp(char *s1, char *s2);
char	*fill_all_norm(char *av, int *size, int *i);
void	count_all_norm(char *str, int *n);

#endif