/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduvivie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 12:57:05 by dduvivie          #+#    #+#             */
/*   Updated: 2022/08/30 19:50:06 by dduvivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

/* Check if the stack is sorted in ascending order */
int	stack_is_sort(t_node *node)
{
	while (node->next != NULL)
	{
		if (node->val > node->next->val)
			return (0);
		node = node->next;
	}
	return (1);
}

/* Display the integer number of each node */
void	display_stack(t_stack *stack)
{
	t_node	*current_node;
	int		i;

	if (stack->size < 1)
		return ;
	current_node = stack->head;
	i = (stack->size * 2) + 1;
	while (i-- > 0)
		ft_printf("-");
	ft_printf("\n");
	while (current_node->next != NULL)
	{
		ft_printf("|%d", current_node->val);
		current_node = current_node->next;
	}
	ft_printf("|%d|\n", current_node->val);
	i = (stack->size * 2) + 1;
	while (i-- > 0)
		ft_printf("-");
	ft_printf("\n");
}

/* Display the order number of each node. The min int has 0 as order */
void	display_node_order(t_stack *stack)
{
	t_node	*current_node;
	int		i;

	if (stack->size < 1)
		return ;
	current_node = stack->head;
	while (current_node->next != NULL)
	{
		ft_printf("|%d", current_node->order);
		current_node = current_node->next;
	}
	ft_printf("|%d|\n", current_node->order);
	i = (stack->size * 2) + 1;
	while (i-- > 0)
		ft_printf("-");
	ft_printf("\n");
}
