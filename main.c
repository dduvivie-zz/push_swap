#include "push_swap.h"

int	main(void)
{
	int stack[] = {2, 1, 3, 6, 5, 8};
	t_list	stack1;

	stack1 = init_stack(stack, 6);
	//ft_printf("%d\n", stack1.head->val);
	//ft_printf("%d\n", stack1.tail->val);
	//ft_printf("PASS\n");
	display_stack(&stack1);
	return (0);
}
