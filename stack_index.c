#include "push_swap.h"

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

t_node	*honyahonya(t_stack *stack, int prev_small_val)
{
	t_node	*current_node;
	long	current_min_diff;
	long	diff;
	t_node	*node;

	current_node = stack->head;
	while (current_node->index != -1)
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

void	set_node_index(t_stack *stack)
{
	int		index;
	int		prev_small_val;
	t_node	*current_small_node;

	index = 0;
	while (index < stack->size)
	{
		if (index == 0)
		{
			current_small_node = get_min_node(stack);
		}
		else if (index == stack->size - 1)
		{
			current_small_node = get_max_node(stack);
		}
		else
		{
			current_small_node = honyahonya(stack, prev_small_val);
		}
		current_small_node->index = index;
		prev_small_val = current_small_node->val;
		index++;
	}
}
