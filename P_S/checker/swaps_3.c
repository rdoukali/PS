/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaps_3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdoukali <rdoukali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 19:06:00 by rdoukali          #+#    #+#             */
/*   Updated: 2022/06/27 16:12:10 by rdoukali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra_c(int *tab, int *size)
{
	int	i;
	int	mem;

	i = 0;
	mem = tab[0];
	while (i < *size - 1)
	{
		tab[i] = tab[i + 1];
		i++;
	}
	tab[i] = mem;
}

void	swap(int *a, int *b)
{
	int	swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
