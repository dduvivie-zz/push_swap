#include "push_swap.h"

void	call_swap(int num, t_stack *stack_a, t_stack *stack_b)
{
	if (num == 0)
	{
		swap(stack_a);
		ft_printf("sa\n");
	}
	else if (num == 1)
	{
		swap(stack_b);
		ft_printf("sb\n");
	}
	else if (num == 2)
	{
		swap(stack_a);
		swap(stack_b);
		ft_printf("ss\n");
	}
}

void	call_push(int num, t_stack *stack_a, t_stack *stack_b)
{
	if (num == 3)
	{
		push(stack_b, stack_a);
		ft_printf("pa\n");
	}
	else if (num == 4)
	{
		push(stack_a, stack_b);
		ft_printf("pb\n");
	}
}

void	call_rotate(int num, t_stack *stack_a, t_stack *stack_b)
{
	if (num == 5)
	{
		rotate(stack_a);
		ft_printf("ra\n");
	}
	else if (num == 6)
	{
		rotate(stack_b);
		ft_printf("rb\n");
	}
	else if (num == 7)
	{
		rotate(stack_a);
		rotate(stack_b);
		ft_printf("rr\n");
	}
}

void	call_reverse_rotate(int num, t_stack *stack_a, t_stack *stack_b)
{
	if (num == 8)
	{
		reverse_rotate(stack_a);
		ft_printf("rra\n");
	}
	else if (num == 9)
	{
		reverse_rotate(stack_b);
		ft_printf("rrb\n");
	}
	else if (num == 10)
	{
		reverse_rotate(stack_a);
		reverse_rotate(stack_b);
		ft_printf("rrr\n");
	}
}

void	call_operation(int num, t_stack *stack_a, t_stack *stack_b)
{
	if (num >= 0 && num <= 2)
		call_swap(num, stack_a, stack_b);
	else if (num == 3 || num == 4)
		call_push(num, stack_a, stack_b);
	else if (num >= 5 && num <= 7)
		call_rotate(num, stack_a, stack_b);
	else if (num >= 8 && num <= 10)
		call_reverse_rotate(num, stack_a, stack_b);
}
