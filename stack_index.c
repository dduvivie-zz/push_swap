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

void	set_node_index(t_stack *stack)
{
	int 	nannka;
	int		diff;
	int     current_min_diff;
	int		index;
	int     size;
	t_node	*current_node;
	t_node  *index_node;
	
	nannka = get_min_val(stack);
	index = 0;
	while (++index < stack->size) // 1, 2, 3, 4, 5
	{
		current_node = stack->head;
		size = stack->size;
		current_min_diff = current_node->val - nannka;
		while (size-- > 0) // 6, 5, 4, 3, 2, 1
		{
			diff = current_node->val - nannka;
			if (diff < current_min_diff && diff > 0)
			{
				current_min_diff = diff;
				index_node = current_node;
			}
			current_node = current_node->next;
		}
		ft_printf("val: %d, index: %d\n", index_node->val, index);
		index_node->index = index;
		nannka = index_node->val;
	}
}
