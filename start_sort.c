#include "push_swap.h"

void	sort_2_num(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->head->val > stack_a->head->next->val)
		call_operation(0, stack_a, stack_b);
}

void	sort_3_num(t_stack *a, t_stack *b)
{
	if ((a->head->val < a->head->next->val) && (a->head->val < a->tail->val))
	{
		call_operation(0, a, b);
		call_operation(5, a, b);
	}
	else if (a->head->val > a->head->next->val)
	{
		// ---------------wip-----------------------
	}

}

void	start(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->size == 1)
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
		//sort_3_num(&stack_a);
	}
	else if (stack_a->size == 4)
	{
		ft_printf("Sort 4 numbers\n");
		//sort_4_num(&stack_a);
	}
	else if (stack_a->size == 5)
	{
		ft_printf("Sort 5 numbers\n");
		//sort_5_num(&stack_a);
	}
	else
	{
		ft_printf("Need radix sort\n");
		test(stack_a, stack_b);
	}
}
