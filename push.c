/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:02:43 by diosanto          #+#    #+#             */
/*   Updated: 2023/03/11 15:35:14 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

//Take the first element from stack_a and send to top of stack_b
void	ft_pa(t_node	**stack_a, t_node	**stack_b)
{
	t_node	*temp;

	if (*stack_a == NULL)
		return ;
	temp = *stack_a;
	*stack_a = (*stack_a)->next;
	temp->next = *stack_b;
	*stack_b = temp;
	printf("pa\n");
}

//Take the first element from stack_b and send to top of stack_a
void	ft_pb(t_node **stack_a, t_node **stack_b)
{
	t_node	*temp;

	if (*stack_b == NULL)
		return ;
	temp = *stack_b;
	*stack_a = (*stack_a)->next;
	temp->next = *stack_a;
	*stack_a = temp;
	printf("pb\n");
}
