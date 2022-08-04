#include "push_swap.h"

int		get_min_val(t_stack *stack)
{
	t_node	*current_node;
	t_node	*min_node;
	int		min;
	int		i;

	current_node = stack->head;
	min = current_node->val;
	i = stack->size;
	while (i-- > 0)
	{
		if (min > current_node->val)
		{
			min = current_node->val;
			min_node = current_node;
		}
		current_node = current_node->next;
	}
	min_node->index = 0;
	return (min);
}

t_node	*honyahonya(t_stack *stack, int prev_small_val)
{
	t_node	*current_node;
	int		size;
	int		current_min_diff;
	int		diff;
	t_node	*next_big_node;

	current_node = stack->head;
	size = stack->size;
	current_min_diff = current_node->val - prev_small_val;
	while (size-- > 0)
	{
		diff = current_node->val - prev_small_val;
		if (diff < current_min_diff && diff > 0)
		{
			current_min_diff = diff;
			next_big_node = current_node;			
		}
		current_node = current_node->next;
	}
	return (next_big_node);
}


void	set_node_index(t_stack *stack)
{
	int 	prev_small_val;
	int		index;
	t_node  *next_big_node;
	
	prev_small_val = get_min_val(stack);
	index = 0;
	while (++index < stack->size) // 1, 2, 3, 4, 5
	{
		next_big_node = honyahonya(stack, prev_small_val);

		ft_printf("val: %d, index: %d\n", next_big_node->val, index);
		next_big_node->index = index;
		prev_small_val = next_big_node->val;
	}
}
