/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdoukali <rdoukali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 19:14:37 by rdoukali          #+#    #+#             */
/*   Updated: 2022/06/29 23:02:36 by rdoukali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	all_500_norm(int *a, int *b, int *s1, int *s2)
{
	int				s_0;
	int				*sort_all;
	int				*sort_inv;
	t_list			*sort1;
	struct s_stack	stack;

	s_0 = *s1 * 1;
	sort_all = sort_tab(a, *s1);
	sort_inv = sort_rev(a, *s1);
	stack.a = a;
	stack.b = b;
	stack.s1 = s1;
	stack.s2 = s2;
	sort1 = sort_lst(sort_all, 0, s_0);
	all_500_norm_1(stack, sort_all, &s_0);
	all_500_norm_2(stack, sort_all, &s_0);
	all_500_norm_3(stack, sort_all, sort_inv, &s_0);
	free(sort1);
	free(sort_all);
	free(sort_inv);
}

void	all_500_norm_1(struct s_stack stack, int *sort_all, int *s1)
{
	struct s_size500	size;

	size.s0 = *s1 * 1;
	size = struct_fill_500(size);
	push_lst_norm(stack, sort_lst(sort_all, 0, size.s4), size.s4);
	push_prt_to_a_nrom(stack, sort_lst(sort_all, size.s3, size.s4), size.s1);
	push_prt_to_a_nrom(stack, sort_lst(sort_all, size.s2, size.s3), size.s1);
	push_prt_to_a_nrom(stack, sort_lst(sort_all, size.s1, size.s2), size.s1);
	push_prt_to_a_nrom(stack, sort_lst(sort_all, 0, size.s1), size.s1);
	push_back_prt_norm(stack, sort_lst(sort_all, 0, size.s1), size.s1);
	push_back_prt_norm(stack, sort_lst(sort_all, size.s1, size.s2), size.s1);
	push_back_prt_norm(stack, sort_lst(sort_all, size.s2, size.s3), size.s1);
	push_back_prt_norm(stack, sort_lst(sort_all, size.s3, size.s4), size.s1);
	push_lst_norm(stack, sort_lst(sort_all, size.s4, size.s8), size.s4);
	push_prt_to_a_nrom(stack, sort_lst(sort_all, size.s7, size.s8), size.s1);
	push_prt_to_a_nrom(stack, sort_lst(sort_all, size.s6, size.s7), size.s1);
	push_prt_to_a_nrom(stack, sort_lst(sort_all, size.s5, size.s6), size.s1);
	push_prt_to_a_nrom(stack, sort_lst(sort_all, size.s4, size.s5), size.s1);
	push_back_prt_norm(stack, sort_lst(sort_all, size.s4, size.s5), size.s1);
	push_back_prt_norm(stack, sort_lst(sort_all, size.s5, size.s6), size.s1);
	push_back_prt_norm(stack, sort_lst(sort_all, size.s6, size.s7), size.s1);
	push_back_prt_norm(stack, sort_lst(sort_all, size.s7, size.s8), size.s1);
}

void	all_500_norm_2(struct s_stack stack, int *sort_all, int *s1)
{
	struct s_size500	size;

	size.s0 = *s1 * 1;
	size = struct_fill_500(size);
	push_lst_norm(stack, sort_lst(sort_all, size.s8, size.s12), size.s4);
	push_prt_to_a_nrom(stack, sort_lst(sort_all, size.s11, size.s12), size.s1);
	push_prt_to_a_nrom(stack, sort_lst(sort_all, size.s10, size.s11), size.s1);
	push_prt_to_a_nrom(stack, sort_lst(sort_all, size.s9, size.s10), size.s1);
	push_prt_to_a_nrom(stack, sort_lst(sort_all, size.s8, size.s9), size.s1);
	push_back_prt_norm(stack, sort_lst(sort_all, size.s8, size.s9), size.s1);
	push_back_prt_norm(stack, sort_lst(sort_all, size.s9, size.s10), size.s1);
	push_back_prt_norm(stack, sort_lst(sort_all, size.s10, size.s11), size.s1);
	push_back_prt_norm(stack, sort_lst(sort_all, size.s11, size.s12), size.s1);
	push_lst_norm(stack, sort_lst(sort_all, size.s12, size.s16), size.s4);
	push_prt_to_a_nrom(stack, sort_lst(sort_all, size.s15, size.s16), size.s1);
	push_prt_to_a_nrom(stack, sort_lst(sort_all, size.s14, size.s15), size.s1);
	push_prt_to_a_nrom(stack, sort_lst(sort_all, size.s13, size.s14), size.s1);
	push_prt_to_a_nrom(stack, sort_lst(sort_all, size.s12, size.s13), size.s1);
	push_back_prt_norm(stack, sort_lst(sort_all, size.s12, size.s13), size.s1);
	push_back_prt_norm(stack, sort_lst(sort_all, size.s13, size.s14), size.s1);
	push_back_prt_norm(stack, sort_lst(sort_all, size.s14, size.s15), size.s1);
	push_back_prt_norm(stack, sort_lst(sort_all, size.s15, size.s16), size.s1);
}

void	all_500_norm_3(struct s_stack stack,
		int *sort_all, int *sort_inv, int *s1)
{
	struct s_size500	size;

	size.s0 = *s1 * 1;
	size = struct_fill_500(size);
	push_lst_norm(stack, sort_lst(sort_all, size.s16, size.s18), size.s2);
	push_final_lst_norm(stack, sort_lst(sort_all, size.s18, size.sf),
		size.sf - size.s18);
	order(stack.a, *stack.s1);
	push_back_direct_norm(stack, sort_lst(sort_inv, 3, size.sl), size.sf_l);
	push_back_direct_norm(stack, sort_lst(sort_inv, size.s1, size.s2), size.s1);
	push_back_lst_norm(stack, sort_lst(sort_inv, size.s1, size.s2), size.s1);
	push_back_lst_norm(stack, sort_lst(sort_inv, size.s2, size.s3), size.s1);
	push_back_lst_norm(stack, sort_lst(sort_inv, size.s3, size.s4), size.s1);
	push_back_lst_norm(stack, sort_lst(sort_inv, size.s4, size.s5), size.s1);
	return_all(stack.a, stack.b, stack.s1, stack.s2);
}
