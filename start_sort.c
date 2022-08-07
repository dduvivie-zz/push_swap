#include "push_swap.h"

void	start(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_is_sort(stack_a->head) || stack_a->size == 1)
	{
		ft_printf("Nothing to sort\n");
		return ;
	}
	else if (stack_a->size == 2)
	{
		ft_printf("Sort 2 numbers\n");
		sort_2_num(stack_a, stack_b);
	}
	else if (stack_a->size == 3)
	{
		ft_printf("Sort 3 numbers\n");
		sort_3_num(stack_a, stack_b);
	}
	else if (stack_a->size == 4)
	{
		ft_printf("Sort 4 numbers\n");
		sort_4_num(stack_a, stack_b);
	}
	else if (stack_a->size == 5)
	{
		ft_printf("Sort 5 numbers\n");
		//sort_5_num(&stack_a);
	}
	else
	{
		ft_printf("Need radix sort\n");
		radix_sort(stack_a, stack_b);
	}
	display_stack(stack_a);
}
