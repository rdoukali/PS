/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdoukali <rdoukali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 19:01:05 by rdoukali          #+#    #+#             */
/*   Updated: 2022/06/29 22:56:10 by rdoukali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

int	a_order(int *a, int s)
{
	int	i;

	i = 0;
	while (i < s - 1)
	{
		if (a[i] > a[i + 1])
			return (0);
		i++;
	}
	return (1);
}

int	after_med(int *a, int s1, int sort)
{
	int	i;

	i = 0;
	while (i <= s1 / 2)
	{
		if (a[i] == sort)
			return (0);
		i++;
	}
	return (1);
}

void	swap(int *a, int *b)
{
	int	swp;

	swp = *a;
	*a = *b;
	*b = swp;
}

int	*tab_dup(int *tab, int size)
{
	int	*dup;
	int	i;

	i = 0;
	dup = malloc(sizeof(int) * size);
	while (i < size)
	{
		dup[i] = tab[i];
		i++;
	}
	return (dup);
}

int	ft_atoi_1(char *str)
{
	int		i;
	int		sign;
	long	res;

	i = 0;
	res = 0;
	sign = 1;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
			i++;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			res = (res * 10) + (str[i] - '0');
		else
			ft_error(sign);
		if (res > 2147483647 && sign == 1)
			ft_error(sign);
		if (res > 2147483648 && sign == -1)
			ft_error(sign);
		i++;
	}
	free(str);
	return ((int)(res * sign));
}