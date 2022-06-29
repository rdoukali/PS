/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdoukali <rdoukali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:05:43 by rdoukali          #+#    #+#             */
/*   Updated: 2022/06/29 20:11:28 by rdoukali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	all_move_a(int *a, int *s1, char *output)
{
	if (str_cmp("sa\n", output) == 0)
		sa_c(a, s1);
	else if (str_cmp("ra\n", output) == 0)
		ra_c(a, s1);
	else if (str_cmp("rra\n", output) == 0)
		rra_c(a, s1);
}

void	all_move_b(int *b, int *s2, char *output)
{
	if (str_cmp("sb\n", output) == 0)
		sb_c(b, s2);
	else if (str_cmp("rb\n", output) == 0)
		rb_c(b, s2);
	else if (str_cmp("rrb\n", output) == 0)
		rrb_c(b, s2);
}

void	all_move(int *a, int *b, int *s1, int *s2)
{
	char		*output;

	output = get_next_line(0);
	while (output && (str_cmp("\n", output) != 0))
	{
		if ((str_cmp("sa\n", output) == 0) || (str_cmp("ra\n", output) == 0)
			|| (str_cmp("rra\n", output) == 0))
			all_move_a(a, s1, output);
		else if ((str_cmp("sb\n", output) == 0) || (str_cmp("rb\n", output) == 0)
			|| (str_cmp("rrb\n", output) == 0))
			all_move_b(b, s2, output);
		else if (str_cmp("ss\n", output) == 0)
			ss_c(a, b, s1, s2);
		else if (str_cmp("pa\n", output) == 0)
			pa_c(a, b, s1, s2);
		else if (str_cmp("pb\n", output) == 0)
			pb_c(a, b, s1, s2);
		else if (str_cmp("rr\n", output) == 0)
			rr_c(a, b, s1, s2);
		else if (str_cmp("rrr\n", output) == 0)
			rrr_c(a, b, s1, s2);
		else
			ft_error(s1);
		output = get_next_line(0);
	}
}

void	sort_check(int *a, int *b, int *s1, int *s2)
{
	int	i;

	i = 0;
	if (*s2 > 0)
		ft_ko(s1);
	if (a_order(a, s1) == 1)
		write(1, "OK\n", 3);
	else
		ft_ko(s1);
}

int	main(int ac, char **av)
{
	int	i;
	int	*a;
	int	*b;
	int	s1;
	int	s2;

	i = 0;
	s2 = 0;
	s1 = count_all(ac, av);
	if (ac < 2)
		return (0);
	a = fill_in(ac - 1, av);
	check_dup(a, &s1);
	b = malloc(sizeof(int) * 0);
	all_move(a, b, &s1, &s2);
	sort_check(a, b, &s1, &s2);
	free(a);
	free(b);
	return (0);
}
