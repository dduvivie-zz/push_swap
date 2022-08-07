#include "push_swap.h"

void	sort_4_num(t_stack *a, t_stack *b)
{
	if (a->head->index == 0)
	{
		call_operation(4, a, b);
		sort_3_num(a, b);
		call_operation(3, a, b);
	}
	else if (a->head->index == 3)
	{
		if (stack_is_sort(a->head->next))
			call_operation(5, a, b);
	}
}
