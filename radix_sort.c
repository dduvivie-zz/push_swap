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

void    print_binary(int num)
{
	int i;

	i = 0;
	while (i++ < 32)
	{
		if (num & 1)
			ft_printf("1");
		else
			ft_printf("0");
		num = num >> 1;
	}
	ft_printf("\n");
}

void	test(void)
{
	int num1 = -2147483648;
	int num2 = -8;

	print_binary(num1);
	print_binary(num2);
}

