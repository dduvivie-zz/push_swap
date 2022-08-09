#include "push_swap.h"

int	main(void)
{
	int args[] = {300, 200, 100, 0};
	t_stack	stack_a;
	t_stack	stack_b;

	//if (!arguments_is_correct(argc, argv))
	//	return (0);
	stack_a = init_stack(args, 4);
	stack_b = init_stack(NULL, 0);
	display_stack(&stack_a);
	display_index(&stack_a);
	start(&stack_a, &stack_b);
	return (0);
}

// 2147483647
// -2147483648
//	int args[] = {-69, 0, 100, 50, 10, 8};
