/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   algorithm_1.c									  :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: rdoukali <rdoukali@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2022/06/27 21:46:09 by rdoukali		  #+#	#+#			 */
/*   Updated: 2022/06/27 21:54:57 by rdoukali		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "push_swap.h"

void	all_20_norm(int *a, int *b, int *s1, int *s2)
{
	int					s_1;
	int					s0;
	int					*sort_all;
	int					*sort_inv;
	struct s_stack		stack;

	s0 = *s1 * 1;
	s_1 = s0 - 3;
	sort_all = sort_tab(a, *s1);
	sort_inv = sort_rev(a, *s1);
	stack.a = a;
	stack.b = b;
	stack.s1 = s1;
	stack.s2 = s2;
	push_final_lst_norm(stack, sort_lst(sort_all, 0, s_1), s_1);
	order(a, *s1);
	push_back_direct_norm(stack, sort_lst(sort_inv, 3, s0), s_1);
	free(sort_all);
	free(sort_inv);
}

void	all_100_norm(int *a, int *b, int *s1, int *s2)
{
	int				s_0;
	struct s_stack	stack;
	int				*sort_all;
	int				*sort_inv;

	s_0 = *s1 * 1;
	sort_all = sort_tab(a, *s1);
	sort_inv = sort_rev(a, *s1);
	stack.a = a;
	stack.b = b;
	stack.s1 = s1;
	stack.s2 = s2;
	all_100_norm_1(stack, sort_all, s1);
	order(a, *s1);
	all_100_norm_2(stack, sort_inv, &s_0);
	free(sort_all);
	free(sort_inv);
}

void	all_100_norm_1(struct s_stack stack, int *sort_all, int *s1)
{
	struct s_size100	size;

	size.s0 = *s1 * 1;
	size = struct_fill(size);
	push_lst_norm(stack, sort_lst(sort_all, 0, size.s1), size.s1);
	push_lst_norm(stack, sort_lst(sort_all, size.s1, size.s2), size.s1);
	push_lst_norm(stack, sort_lst(sort_all, size.s2, size.s3), size.s1);
	push_lst_norm(stack, sort_lst(sort_all, size.s3, size.s4), size.s1);
	push_final_lst_norm(stack, sort_lst(sort_all, size.s4, size.s5), size.s1_0);
}

void	all_100_norm_2(struct s_stack stack, int *sort_inv, int *s1)
{
	struct s_size100	size;

	size.s0 = *s1 * 1;
	size = struct_fill(size);
	push_back_direct_norm(stack, sort_lst(sort_inv, 3, size.s1), size.s0_1);
	push_back_lst_norm(stack, sort_lst(sort_inv, size.s1, size.s2), size.s1);
	push_back_lst_norm(stack, sort_lst(sort_inv, size.s2, size.s3), size.s1);
	push_back_lst_norm(stack, sort_lst(sort_inv, size.s3, size.s4), size.s1);
	push_back_lst_norm(stack, sort_lst(sort_inv, size.s4, size.s0), size.s6);
}

void	order(int *a, int size)
{
	if (a_order(a, size) == 0 && size == 3)
	{
		if (a[0] < a[1] && a[0] > a[2] && a[1] > a[2])
			rra(a, size);
		else if (a[0] > a[1] && a[0] < a[2] && a[1] < a[2])
			sa(a, size);
		else if (a[0] > a[1] && a[0] > a[2] && a[1] < a[2])
			ra(a, size);
		else if (a[0] > a[1] && a[0] > a[2] && a[1] > a[2])
		{
			ra(a, size);
			sa(a, size);
		}
		else if (a[0] < a[1] && a[0] < a[size - 1] && a[1] > a[size - 1])
		{
			rra(a, size);
			sa(a, size);
		}
	}
	else if (a_order(a, size) == 0 && size == 2)
	{
		if (a[0] > a[1])
			sa(a, size);
	}
}
