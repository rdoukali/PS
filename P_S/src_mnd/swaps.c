/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdoukali <rdoukali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 19:06:00 by rdoukali          #+#    #+#             */
/*   Updated: 2022/06/29 23:28:39 by rdoukali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(int *tab, int size)
{
	int	swp;

	if (size < 2)
		return ;
	swp = tab[0];
	tab[0] = tab[1];
	tab[1] = swp;
	write(1, "sa\n", 3);
}

void	sb(int *tab, int size)
{
	int	swp;

	if (size < 2)
		return ;
	swp = tab[0];
	tab[0] = tab[1];
	tab[1] = swp;
	write(1, "sb\n", 3);
}

void	ss(int *tab1, int *tab2, int size1, int size2)
{
	int	swp;

	if (size1 < 2 || size2 < 2)
		return ;
	swp = tab1[0];
	tab1[0] = tab1[1];
	tab1[1] = swp;
	swp = tab2[0];
	tab2[0] = tab2[1];
	tab2[1] = swp;
	write(1, "ss\n", 3);
}

void	pa(int *tab1, int *tab2, int *s1, int *s2)
{
	int	i;
	int	mem;

	if (s2 == 0)
		return ;
	mem = tab2[0];
	i = *s1;
	while (i >= 0)
	{
		tab1[i + 1] = tab1[i];
		i--;
	}
	i++;
	tab1[i] = mem;
	while (i < *s2)
	{
		tab2[i] = tab2[i + 1];
		i++;
	}
	*s1 = *s1 + 1;
	*s2 = *s2 - 1;
	write(1, "pa\n", 3);
}

void	pb(int *tab2, int *tab1, int *s2, int *s1)
{
	int	i;
	int	mem;

	if (s2 == 0)
		return ;
	mem = tab2[0];
	i = *s1;
	while (i >= 0)
	{
		tab1[i + 1] = tab1[i];
		i--;
	}
	i++;
	tab1[i] = mem;
	while (i < *s2)
	{
		tab2[i] = tab2[i + 1];
		i++;
	}
	*s1 = *s1 + 1;
	*s2 = *s2 - 1;
	write(1, "pb\n", 3);
}
