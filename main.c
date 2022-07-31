#include "push_swap.h"

int	main(void)
{
	int args[] = {7, 2, 5};
	t_stack	stack_a;
	t_stack	stack_b;

	//if (!arguments_is_correct(argc, argv))
	//	return (0);
	stack_a = init_stack(args, 3);
	stack_b = init_stack(NULL, 0);
	display_stack(&stack_a);
	start(&stack_a, &stack_b);
	return (0);
}
