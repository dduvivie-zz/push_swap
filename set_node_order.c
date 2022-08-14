/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_node_order.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduvivie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 12:57:05 by dduvivie          #+#    #+#             */
/*   Updated: 2022/08/30 19:50:06 by dduvivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

/* Find the minimum node(number) in stack and return the pointer */
t_node	*get_min_node(t_stack *stack)
{
	t_node	*current_node;
	t_node	*min_node;
	int		min;

	current_node = stack->head;
	min = current_node->val;
	min_node = current_node;
	while (current_node != NULL)
	{
		if (min > current_node->val)
		{
			min = current_node->val;
			min_node = current_node;
		}
		current_node = current_node->next;
	}
	return (min_node);
}

/* Find the maximum node(number) in stack and return the pointer */
t_node	*get_max_node(t_stack *stack)
{
	t_node	*current_node;
	t_node	*max_node;
	int		max;

	current_node = stack->head;
	max = current_node->val;
	max_node = current_node;
	while (current_node != NULL)
	{
		if (max < current_node->val)
		{
			max = current_node->val;
			max_node = current_node;
		}
		current_node = current_node->next;
	}
	return (max_node);
}

/* Find the next larger node(number) of "prev_swall _vall" */
t_node	*get_next_larger_node(t_stack *stack, int prev_small_val)
{
	t_node	*current_node;
	long	current_min_diff;
	long	diff;
	t_node	*node;

	current_node = stack->head;
	while (current_node->order != -1)
		current_node = current_node->next;
	current_min_diff = current_node->val - (long)prev_small_val;
	node = current_node;
	while (current_node != NULL)
	{
		diff = current_node->val - (long)prev_small_val;
		if (diff < current_min_diff && diff > 0)
		{
			current_min_diff = diff;
			node = current_node;
		}
		current_node = current_node->next;
	}
	return (node);
}

/* Set the order for each node in stack, from MIN to MAX */
void	set_node_order(t_stack *stack)
{
	int		i;
	int		prev_small_val;
	t_node	*current_small_node;

	i = -1;
	while (++i < stack->size)
	{
		if (i == 0)
			current_small_node = get_min_node(stack);
		else if (i == stack->size - 1)
			current_small_node = get_max_node(stack);
		else
			current_small_node = get_next_larger_node(stack, prev_small_val);
		current_small_node->order = i;
		prev_small_val = current_small_node->val;
	}
}
