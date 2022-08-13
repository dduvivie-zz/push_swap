#include "push_swap.h"

void	start(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_is_sort(stack_a->head) || stack_a->size == 1)
		return ;
	else if (stack_a->size == 2)
		sort_2_int(stack_a, stack_b);
	else if (stack_a->size == 3)
		sort_3_int(stack_a, stack_b);
	else if (stack_a->size == 4)
		sort_4_int(stack_a, stack_b);
	else if (stack_a->size == 5)
		sort_5_int(stack_a, stack_b);
	else
		radix_sort(stack_a, stack_b);
}
