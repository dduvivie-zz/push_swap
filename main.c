#include "push_swap.h"

int	main(void)
{
	int args[] = {1, 2, 3, 4, 5, 6};
	t_stack	stack1;
	t_stack	stack2;

	stack1 = init_stack(args, 6);
	stack2 = init_stack(NULL, 0);

	ft_printf("a\n");
	display_stack(&stack1);
	ft_printf("head : %d, tail : %d\n", stack1.head->val, stack1.tail->val);

	// swap
	swap(&stack1);
	ft_printf("a swap\n");
	display_stack(&stack1);
	ft_printf("head : %d, tail : %d\n", stack1.head->val, stack1.tail->val);

	// push
	push(&stack1, &stack2);
	ft_printf("a push a\n");
	display_stack(&stack1);
	ft_printf("head : %d, tail : %d\n", stack1.head->val, stack1.tail->val);
	display_stack(&stack2);
	ft_printf("head : %d, tail : %d\n", stack2.head->val, stack2.tail->val);

	// rotate
	rotate(&stack1);
	ft_printf("a rotate\n");
	display_stack(&stack1);
	ft_printf("head : %d, tail : %d\n", stack1.head->val, stack1.tail->val);

	// reserve_rotate
	reverse_rotate(&stack1);
	ft_printf("a reserve_rotate\n");
	display_stack(&stack1);
	ft_printf("head : %d, tail : %d\n", stack1.head->val, stack1.tail->val);

	return (0);
}
