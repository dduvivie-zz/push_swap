#include "push_swap.h"

void	test_operations(t_stack *a, t_stack *b)
{
	// swap
	swap(&a);
	ft_printf("a swap\n");
	display_stack(&a);
	ft_printf("head : %d, tail : %d\n", a->head->val, a->tail->val);

	// push
	push(&a, &b);
	ft_printf("a push a\n");
	display_stack(&a);
	ft_printf("head : %d, tail : %d\n", a->head->val, a->tail->val);
	display_stack(&b);
	ft_printf("head : %d, tail : %d\n", b->head->val, b->tail->val);

	// rotate
	rotate(&a);
	ft_printf("a rotate\n");
	display_stack(&a);
	ft_printf("head : %d, tail : %d\n", a->head->val, a->tail->val);

	// reserve_rotate
	reverse_rotate(&a);
	ft_printf("a reserve_rotate\n");
	display_stack(&a);
	ft_printf("head : %d, tail : %d\n", a->head->val, a->tail->val);
}

int	main(void)
{
	int args[] = {1, 2, 3, 4, 5, 6};
	t_stack	stack1;
	t_stack	stack2;

	stack1 = init_stack(args, 6);
	stack2 = init_stack(NULL, 0);

	display_stack(&stack1);
	ft_printf("head : %d, tail : %d\n", stack1.head->val, stack1.tail->val);

	return (0);
}
