#include "push_swap.h"

void	sort_nth_digit(t_stack *a, t_stack *b, int digits)
{
	t_node	*curr_a_node;
	int		a_size;
	int		i;
	int		num;

	a_size = a->size;
	while (a_size-- > 0)
	{
		curr_a_node = a->head;
		i = 0;
		num = curr_a_node->index;
		while (i++ < digits)
			num = num >> 1;
		if ((num & 1) == 1)
			call_operation(5, a, b);
		else
			call_operation(4, a, b);
	}
	while (b->size > 0)
		call_operation(3, a, b);
}

void	radix_sort(t_stack *a, t_stack *b)
{
	int		digit;

	digit = 0;
	while (!stack_is_sort(a->head))
	{
		ft_printf("-------------%d-th digit sort------------------\n", digit);
		sort_nth_digit(a, b, digit);
		digit++;
	}
	display_stack(a);
}
