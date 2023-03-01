/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 11:41:26 by diosanto          #+#    #+#             */
/*   Updated: 2023/03/01 19:44:08 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	print_stack(t_node *head, char a_or_b)
{
	printf("%c STACK:\n", a_or_b);
	while (head->next != NULL)
	{
		printf("%i\n", head->number);
		head = head->next;
	}
	printf("%i\n\n\n", head->number);
	return ;
}

t_node	*insert_stack_a(char **av)
{
	t_node	**stack_a;
	t_node	*temp;
	t_node	*head;
	int		i;
	int		number;

	i = 0;
	while (av[++i])
	{
		if (arg_checker(av[i]) == 0)
		{
			printf("ERROR\n");
			return (NULL);
		}
		number = ft_atoi(av[i]);
		if (i == 1)
			head = ft_lstnew_ps(number);
		else
		{
			temp = ft_lstnew_ps(number);
			ft_lstadd_back_ps(stack_a, temp);
		}
		stack_a = &head;
	}
	return (head);
}

int	main(int ac, char **av)
{
	t_node	**stack_a;
	t_node	**stack_b;
	t_node	*head_a;
	t_node	*head_b;
	int		i;

	i = 0;
	if (ac < 2)
		return (0);
	head_a = insert_stack_a(av);
	printf("counted %i nodes\n\n\n", ft_lstsize(head_a));
	print_stack(head_a, 'A');
	stack_a = &head_a;
	stack_b = &head_b;
	printf("After pushing 1.A to 1.B\n\n__________________________________\n\n\n");
	ft_pa(stack_a, stack_b);
	print_stack(head_a, 'A');
	print_stack(head_b, 'B');
	return (0);
}
