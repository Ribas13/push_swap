/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:37:39 by diosanto          #+#    #+#             */
/*   Updated: 2023/01/31 14:34:11 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstclear(t_node **lst)
{
	t_node	*plzwork;

	if (!lst || !*lst)
		return ;
	while (*lst)
	{
		plzwork = (*lst)->next;
		free(*lst);
		*lst = plzwork;
	}
	lst = NULL;
}
