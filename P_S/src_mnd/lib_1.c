/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdoukali <rdoukali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 18:38:13 by rdoukali          #+#    #+#             */
/*   Updated: 2022/06/29 22:21:18 by rdoukali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(int c)
{
	fprintf(stderr, "Error\n");
	//write(stderr, "Error\n", 6);
	exit(EXIT_FAILURE);
	c *= 1;
}

void	check_dup(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] == tab[j])
				ft_error(size);
			j++;
		}
		i++;
	}
}

int	*sort_tab(int *a, int s1)
{
	int	i;
	int	r;
	int	*tab;

	tab = tab_dup(a, s1);
	r = 1;
	while (r == 1)
	{
		r = 0;
		i = 1;
		while (i < s1)
		{
			if (tab[i - 1] > tab[i])
			{
				swap(&tab[i], &tab[i - 1]);
				r = 1;
			}
			i++;
		}
	}
	return (tab);
}

int	*sort_rev(int *a, int s1)
{
	int	i;
	int	r;
	int	*tab;

	tab = tab_dup(a, s1);
	r = 1;
	while (r == 1)
	{
		r = 0;
		i = 1;
		while (i < s1)
		{
			if (tab[i - 1] < tab[i])
			{
				swap(&tab[i], &tab[i - 1]);
				r = 1;
			}
			i++;
		}
	}
	return (tab);
}

int	iss_digit(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}
