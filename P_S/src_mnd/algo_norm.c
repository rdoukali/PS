/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_norm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdoukali <rdoukali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 20:38:11 by rdoukali          #+#    #+#             */
/*   Updated: 2022/06/29 23:26:56 by rdoukali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_lst_norm(struct s_stack stacks, t_list *sort, int s5)
{
	int	med;
	int	i;

	i = 0;
	if (sort == NULL || a_order(stacks.a, *stacks.s1) == 1)
		return ;
	while (check_sort_lst(stacks.a, *stacks.s1, sort, s5) == 0 && i < s5)
	{
		med = medi(stacks.a, *stacks.s1);
		if (exist_lst(stacks.a[0], sort) == 1)
		{
			pb(stacks.a, stacks.b, stacks.s1, stacks.s2);
			i++;
		}
		else if (sort_after_lst(stacks.a, *stacks.s1, sort, s5) >= med)
			rra(stacks.a, *stacks.s1);
		else
			ra(stacks.a, *stacks.s1);
	}
	free(sort);
}

void	push_final_lst_norm(struct s_stack stacks, t_list *sort, int s5)
{
	int	i;

	i = 0;
	if (sort == NULL || a_order(stacks.a, *stacks.s1) == 1)
		return ;
	while (check_sort_lst(stacks.a, *stacks.s1, sort, s5) == 0
		&& *stacks.s1 > 3 && i < s5)
	{
		if (stacks.a[0] == lst_index(sort, i)
			|| stacks.a[1] == lst_index(sort, i))
		{
			if (stacks.a[1] == lst_index(sort, i))
				sa(stacks.a, *stacks.s1);
			pb(stacks.a, stacks.b, stacks.s1, stacks.s2);
			i++;
		}
		else if (after_med(stacks.a, *stacks.s1, lst_index(sort, i)) == 1)
			rra(stacks.a, *stacks.s1);
		else
			ra(stacks.a, *stacks.s1);
	}
	free(sort);
}

void	push_back_direct_norm(struct s_stack stacks, t_list *sort, int s5)
{
	int	i;

	i = 0;
	if (sort == NULL)
		return ;
	while (stacks.b[0] != lst_index(sort, i) && i < s5)
		i++;
	while (stacks.b[0] == lst_index(sort, i) && i < s5 && *stacks.s2 > 0)
	{
		pa(stacks.a, stacks.b, stacks.s1, stacks.s2);
		i++;
	}
	free(sort);
}

void	push_back_lst_norm(struct s_stack stacks, t_list *sort, int s5)
{
	int	i;

	if (sort == NULL)
		return ;
	i = 0;
	while (exist(stacks.b, lst_index(sort, i), stacks.s2) == 0 && i < s5)
		i++;
	while (check_sort_lst(stacks.b, *stacks.s2, sort, s5) == 0
		&& i < s5 && *stacks.s2 > 0)
	{
		if (stacks.b[0] == lst_index(sort, i)
			|| stacks.b[1] == lst_index(sort, i))
		{
			if (stacks.b[1] == lst_index(sort, i))
				sb(stacks.b, *stacks.s2);
			pa(stacks.a, stacks.b, stacks.s1, stacks.s2);
			i++;
		}
		else if (after_med(stacks.b, *stacks.s2, lst_index(sort, i)) == 1)
			rrb(stacks.b, *stacks.s2);
		else
			rb(stacks.b, *stacks.s2);
	}
	free(sort);
}

void	push_back_prt_norm(struct s_stack stacks, t_list *sort, int s5)
{
	int	i;

	if (sort == NULL)
		return ;
	i = 0;
	while (check_sort_lst(stacks.a, *stacks.s1, sort, s5) == 0
		&& i < s5 && *stacks.s1 > 0)
	{
		if (stacks.a[0] == lst_index(sort, i)
			|| stacks.a[1] == lst_index(sort, i)
			|| stacks.a[*stacks.s1 - 1] == lst_index(sort, i))
		{
			if (stacks.a[1] == lst_index(sort, i))
				sa(stacks.a, *stacks.s1);
			else if (stacks.a[*stacks.s1 - 1] == lst_index(sort, i))
				rra(stacks.a, *stacks.s1);
			pb(stacks.a, stacks.b, stacks.s1, stacks.s2);
			i++;
		}
		else if (after_med(stacks.a, *stacks.s1, lst_index(sort, i)) == 1)
			rra(stacks.a, *stacks.s1);
		else
			ra(stacks.a, *stacks.s1);
	}
	free(sort);
}
