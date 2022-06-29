/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdoukali <rdoukali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 19:10:33 by rdoukali          #+#    #+#             */
/*   Updated: 2022/06/29 21:07:17 by rdoukali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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
			ft_error(&n);
		if (str[i] >= '0' && str[i] <= '9')
			n = n + 1;
		while (str[i] >= '0' && str[i] <= '9')
			i++;
		if (str[i] != ' ' && str[i] != '\t' && str[i])
			ft_error(&n);
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
			ft_error(n);
		if (str[i] >= '0' && str[i] <= '9')
			*n = *n + 1;
		while (str[i] >= '0' && str[i] <= '9')
			i++;
		if (str[i] != ' ' && str[i] != '\t' && str[i])
			ft_error(n);
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
	while (k < count(av))
	{
		tab[k] = ft_atoi(fill_all_norm(av, size, &i));
		k++;
		i++;
	}
	return (tab);
}
