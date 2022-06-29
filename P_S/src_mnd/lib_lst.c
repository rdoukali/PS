/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_lst.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdoukali <rdoukali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 18:32:16 by rdoukali          #+#    #+#             */
/*   Updated: 2022/06/29 22:59:59 by rdoukali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_lst_norm(t_list *lst, t_list *tmp, t_list *head)
{
	tmp = head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = lst;
	//free(lst);
}

t_list	*sort_lst(int *sort, int s_s, int s_e)
{
	int		i;
	t_list	*lst;
	t_list	*head;
	t_list	*tmp;

	if (s_e <= s_s)
		return (NULL);
	head = NULL;
	i = s_s;
	while (i < s_e)
	{
		lst = malloc(sizeof(t_list));
		lst->data = sort[i];
		lst->next = NULL;
		if (head == NULL)
			head = lst;
		else
			sort_lst_norm (lst, tmp, head);
		i++;
	}
	return (head);
}
