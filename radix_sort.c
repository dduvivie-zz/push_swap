#include "push_swap.h"

// int_to_bin
// 0_or_1
// stack_is_sort
//
//
//void	radix_sort(t_stack *stack_a, t_stack *stack_b)
//{
//
//	return ;
//}

void	sort_nth_digit(t_stack *a, t_stack *b, int digits)
{
		t_node	*curr_a_node;
		t_node	*curr_b_node;
		int		a_size;
		int		i;
		int		num;

		curr_a_node = a->head;
		curr_b_node = b->head;
		a_size = a->size;
		while (a_size-- > 0)
		{
			i = 0;
			num = curr_a_node->inde;
			while (i++ < digits)
				num = num >> 1;
			if ((curr_a_node->index & 1) == 1)
				call_operation(5, a, b);
			else
				call_operation(4, a, b);
			
		}
}

void	test(t_stack *a, t_stack *b)
{
	int		digit;
	int		a_size;
	t_node	*curr_a_node;
	t_node	*curr_b_node;

	ft_printf("stack is sort: %d\n", stack_is_sort(a));
	digit = 0;
	while (!stack_is_sort(a))
	{
		sort_nth_digit(digit);
		digit++; // 1, 2, 3, 4, 5 ... max 32
	}


}

