/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 11:44:29 by diosanto          #+#    #+#             */
/*   Updated: 2023/03/01 19:44:43 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>

typedef struct node_t
{
	int				number;
	struct node_t	*next;
}				t_node;

int		signal_checker(char *str);
int		num_checker(char *str);
int		ft_atoi(const char *str);
t_node	*ft_lstnew_ps(int content);
t_node	*lstlast_node_ps(t_node *lst);
t_node	*ft_lstadd_back_ps(t_node **lst, t_node *new_last);
void	ft_lstadd_front_ps(t_node **lst, t_node *new);
int		check_chars(char *str);
int		arg_checker(char *str);
void	ft_lstclear(t_node **lst);
void	ft_sa(t_node **stack_a);
void	ft_sb(t_node **stack_b);
void	ft_ss(t_node **stack_a, t_node **stack_b);
void	ft_pa(t_node **stack_a, t_node **stack_b);
void	ft_pb(t_node **stack_b);
void	ft_ra(t_node **stack_a);
void	ft_rb(t_node **stack_b);
void	ft_rr(t_node **stack_a, t_node **stack_b);
void	ft_rra(t_node **stack_a);
void	ft_rrb(t_node **stack_b);
void	ft_rrr(t_node **stack_a, t_node **stack_b);
int	ft_lstsize(t_node *lst);

#endif
