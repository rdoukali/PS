/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdoukali <rdoukali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 19:16:31 by rdoukali          #+#    #+#             */
/*   Updated: 2022/06/29 23:03:23 by rdoukali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*fill_tab(char **av, int size)
{
	int	i;
	int	*tab;

	i = 0;
	tab = malloc(sizeof(int) * size);
	while (i < size)
	{
		tab[i] = ft_atoi(av[i + 1]);
		i++;
	}
	return (tab);
}

char	*fill_all_norm(char *av, int *size, int *i)
{
	char	*ptr;
	int		start;
	int		end;
	int		j;

	start = -1;
	while (av[*i] == ' ' || av[*i] == '\t')
		*i = *i + 1;
	if ((av[*i] >= '0' && av[*i] <= '9') || av[*i] == '-' || av[*i] == '+')
		start = *i;
	if (av[*i] == '-' || av[*i] == '+')
		*i = *i + 1;
	while (av[*i] >= '0' && av[*i] <= '9')
		*i = *i + 1;
	end = *i;
	ptr = malloc(sizeof(char) * end - start + 1);
	j = 0;
	while (start < end && start >= 0)
	{
		ptr[j] = av[start];
		start++;
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}

int	*fill_all(char *av, int *size)
{
	int	i;
	int	k;
	int	j;
	int	*tab;

	i = 0;
	k = 0;
	*size = count(av);
	tab = malloc(sizeof(int) * count(av));
	while (k < *size)
	{
		tab[k] = ft_atoi_1(fill_all_norm(av, size, &i));
		k++;
		i++;
	}
	return (tab);
}

int	main(int ac, char **av)
{
	int	*a;
	int	*b;
	int	s1;
	int	s2;

	s2 = 0;
	s1 = count_all(ac, av);
	if (s1 < 1)
		ft_error(s1);
	a = fill_in(ac - 1, av);
	check_dup(a, s1);
	b = malloc(sizeof(int) * 0);
	if (a_order(a, s1) == 1)
		return (0);
	if (s1 > 250)
		all_500_norm(a, b, &s1, &s2);
	else if (s1 > 20)
		all_100_norm(a, b, &s1, &s2);
	else if (s1 > 3)
		all_20_norm(a, b, &s1, &s2);
	else
		order(a, s1);
	free(a);
	free(b);
	//system("leaks push_swap");
	return (0);
}
