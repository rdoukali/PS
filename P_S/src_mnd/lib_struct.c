/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_struct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdoukali <rdoukali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 19:28:29 by rdoukali          #+#    #+#             */
/*   Updated: 2022/06/29 19:32:17 by rdoukali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

struct s_size100	struct_fill(struct s_size100 size)
{
	struct s_size100	size2;

	size2.s0 = size.s0;
	size2.s1 = size2.s0 / 5;
	size2.s2 = size2.s1 + size2.s1;
	size2.s3 = size2.s2 + size2.s1;
	size2.s4 = size2.s3 + size2.s1;
	size2.s5 = size2.s0 - 3;
	size2.s6 = size2.s0 - size2.s4;
	size2.s1_0 = size2.s5 - size2.s4;
	size2.s0_1 = size2.s1 - 3;
	return (size2);
}

struct s_size500	struct_fill_500(struct s_size500 size)
{
	struct s_size500	size2;

	size2.s0 = size.s0;
	size2.s1 = size2.s0 / 20;
	size2.s2 = size2.s1 + size2.s1;
	size2.s3 = size2.s2 + size2.s1;
	size2.s4 = size2.s3 + size2.s1;
	size2.s5 = size2.s4 + size2.s1;
	size2.s6 = size2.s5 + size2.s1;
	size2.s7 = size2.s6 + size2.s1;
	size2.s8 = size2.s7 + size2.s1;
	size2.s9 = size2.s8 + size2.s1;
	size2.s10 = size2.s9 + size2.s1;
	size2.s11 = size2.s10 + size2.s1;
	size2.s12 = size2.s11 + size2.s1;
	size2.s13 = size2.s12 + size2.s1;
	size2.s14 = size2.s13 + size2.s1;
	size2.s15 = size2.s14 + size2.s1;
	size2.s16 = size2.s15 + size2.s1;
	size2.s18 = size2.s17 + size2.s1;
	size2.sf = size2.s0 - 3;
	size2.sl = size2.s0 - size2.s19;
	size2.sf_l = size2.sl - 3;
	size2.s1_3 = size2.s1 - 3;
	return (size2);
}

int	exist(int *a, int sort, int *s)
{
	int	i;

	i = 0;
	while (i < *s)
	{
		if (a[i] == sort)
			return (1);
		i++;
	}
	return (0);
}

int	exist_lst(int a, t_list *sort)
{
	int		i;
	t_list	*sort2;

	i = 0;
	sort2 = sort;
	while (sort2 != NULL)
	{
		if (a == sort2->data)
			return (1);
		sort2 = sort2->next;
		i++;
	}
	return (0);
}
