#include "push_swap.h"

void	update_node_index(t_stack *a)
{
	t_node	*current_node;

	current_node = a->head;
	while (current_node != NULL)
	{
		current_node->index--;
		current_node = current_node->next;
	}
}

void	sort_5_int(t_stack *a, t_stack *b)
{
	while (a->head->index != 0)
	{
		if (a->tail->index == 0)
			call_operation(8, a, b);
		else if (a->head->next->index == 0)
			call_operation(0, a, b);
		else if (a->head->next->next->index == 0)
			call_operation(5, a, b);
		else
			call_operation(8, a, b);
	}
	call_operation(4, a, b);
	update_node_index(a);
	sort_4_int(a, b);
	call_operation(3, a, b);
}
