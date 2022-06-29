/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdoukali <rdoukali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 14:48:05 by rdoukali          #+#    #+#             */
/*   Updated: 2022/06/29 20:41:09 by rdoukali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	*tab_join(int *tab1, int *tab2, int *s1, int *s2)
{
	int	i;
	int	j;
	int	*tab;

	i = 0;
	*s1 = *s1 + *s2;
	tab = malloc(sizeof(int) * *s1);
	while (i < *s1 - *s2)
	{
		tab[i] = tab1[i];
		i++;
	}
	j = 0;
	while (j < *s2)
	{
		tab[i] = tab2[j];
		j++;
		i++;
	}
	return (tab);
}

int	*fill_in(int size, char **av)
{
	int	i;
	int	k;
	int	*tab;
	int	*tt;
	int	sc;

	i = 1;
	k = 0;
	tab = malloc(sizeof(int) * size);
	while (i <= size)
	{
		if (iss_digit(av[i]) == 1)
		{
			tab[k] = ft_atoi(av[i]);
			k++;
		}
		else
		{
			sc = count(av[i]);
			tt = fill_all(av[i], &sc);
			tab = tab_join(tab, tt, &k, &sc);
		}
		i++;
	}
	return (tab);
}

int	sort_after_lst(int *a, int *s1, t_list *sort, int *s3)
{
	int		i;
	int		j;
	t_list	*tmp;

	i = 0;
	tmp = sort;
	while (i < *s1)
	{
		j = 0;
		while (j < *s3)
		{
			if (a[i] == tmp->data)
				return (i);
			j++;
			tmp = tmp->next;
		}
		tmp = sort;
		i++;
	}
	return (-1);
}

int	medi(int *a, int *s)
{
	return (*s / 2);
}

int	str_cmp(char *s1, char *s2)
{
	size_t	i;

	i = 0;
	if (s2 == 0)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
