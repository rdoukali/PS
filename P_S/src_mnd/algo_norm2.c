/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_norm2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdoukali <rdoukali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 21:44:21 by rdoukali          #+#    #+#             */
/*   Updated: 2022/06/29 23:00:47 by rdoukali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_prt_to_a_nrom(struct s_stack stacks, t_list *sort, int s5)
{
	int	med;
	int	i;

	i = 0;
	if (sort == NULL)
		return ;
	while (check_sort_lst(stacks.b, *stacks.s2, sort, s5) == 0
		&& *stacks.s1 > 3 && i < s5)
	{
		med = medi(stacks.b,*stacks.s2);
		if (search_lst(stacks.b[0], sort, s5) == 1)
		{
			pa(stacks.a, stacks.b, stacks.s1, stacks.s2);
			i++;
		}
		else if (sort_after_lst(stacks.b, *stacks.s2, sort, s5) >= med)
			rrb(stacks.b, *stacks.s2);
		else
			rb(stacks.b, *stacks.s2);
	}
	free(sort);
}

void	push_last_norm(struct s_stack stacks, t_list *sort, int s5)
{
	int	i;

	if (sort == NULL)
		return ;
	while (exist(stacks.b, lst_index(sort, i), stacks.s2) == 0 && i < s5)
			i++;
	i = 0;
	while (*stacks.s2 > 0
		&& exist(stacks.b, lst_index(sort, i), stacks.s2) == 1)
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

void	return_all(int *a, int *b, int *s1, int *s2)
{
	int	i;

	i = 0;
	while (*s2 > 0)
	{
		pa(a, b, s1, s2);
	}
}
