/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdoukali <rdoukali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 14:55:18 by rdoukali          #+#    #+#             */
/*   Updated: 2022/06/27 15:01:22 by rdoukali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	a_order(int *a, int *s)
{
	int	i;

	i = 0;
	while (i < *s - 1)
	{
		if (a[i] > a[i + 1])
			return (0);
		i++;
	}
	return (1);
}

int	after_med(int *a, int *s1, int sort)
{
	int	i;

	i = 0;
	while (i <= *s1 / 2)
	{
		if (a[i] == sort)
			return (0);
		i++;
	}
	return (1);
}

int	lst_index(t_list *lst, int n)
{
	int	i;
	int	r;

	i = 0;
	while (i < n && lst->next != NULL)
	{
		lst = lst->next;
		i++;
	}
	r = lst->data;
	return (r);
}

int	search_lst(int a, t_list *sort, int *s5)
{
	int	j;

	j = 0;
	while (j < *s5)
	{
		if (a == sort->data)
			return (1);
		j++;
		sort = sort->next;
	}
	return (0);
}
