/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdoukali <rdoukali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 19:11:30 by rdoukali          #+#    #+#             */
/*   Updated: 2022/06/25 19:13:38 by rdoukali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_error(int *c)
{
	fprintf (stderr, "Error\n");
	exit (EXIT_FAILURE);
	*c *= 1;
}

void	ft_ko(int *c)
{
	fprintf (stderr, "KO\n");
	exit (EXIT_FAILURE);
	*c *= 1;
}

void	check_dup(int *tab, int *size)
{
	int	i;
	int	j;

	i = 0;
	while (i < *size)
	{
		j = i + 1;
		while (j < *size)
		{
			if (tab[i] == tab[j])
				ft_error(size);
			j++;
		}
		i++;
	}
}

int	*sort_tab(int *a, int *s1)
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
		while (i < *s1)
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

int	*sort_rev(int *a, int *s1)
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
		while (i < *s1)
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
