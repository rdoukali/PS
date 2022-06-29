/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdoukali <rdoukali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 18:43:01 by rdoukali          #+#    #+#             */
/*   Updated: 2022/06/29 22:32:06 by rdoukali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_sort_lst(int *a, int s1, t_list *sort, int s5)
{
	size_t	i;
	size_t	j;
	t_list	*tmp;

	i = 0;
	tmp = sort;
	while (i < s1)
	{
		j = 0;
		while (j < s5)
		{
			if (a[i] == tmp->data)
				return (0);
			j++;
			tmp = tmp->next;
		}
		tmp = sort;
		i++;
	}
	return (1);
}

int	ft_atoi(char *str)
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
	return ((int)(res * sign));
}

int	count(char *str)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		if (str[i] == '-' || str[i] == '+')
			i++;
		if ((str[i] < '0' || str[i] > '9') && str[i])
			ft_error(n);
		if (str[i] >= '0' && str[i] <= '9')
			n = n + 1;
		while (str[i] >= '0' && str[i] <= '9')
			i++;
		if (str[i] != ' ' && str[i] != '\t' && str[i])
			ft_error(n);
	}
	return (n);
}

void	count_all_norm(char *str, int *n)
{
	int	i;

	i = 0;
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		if (str[i] == '-' || str[i] == '+')
			i++;
		if ((str[i] < '0' || str[i] > '9') && str[i])
			ft_error(*n);
		if (str[i] >= '0' && str[i] <= '9')
			*n = *n + 1;
		while (str[i] >= '0' && str[i] <= '9')
			i++;
		if (str[i] != ' ' && str[i] != '\t' && str[i])
			ft_error(*n);
	}
}

int	count_all(int ac, char **av)
{
	int	i;
	int	n;

	i = 1;
	n = 0;
	while (i < ac)
	{
		count_all_norm(av[i], &n);
		i++;
	}
	return (n);
}
