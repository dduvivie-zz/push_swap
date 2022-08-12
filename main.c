#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	stack_a;
	t_stack	stack_b;
	int		*int_list;

	if (argc < 2)
		return (0);
	int_list = malloc((argc - 1) * sizeof(int));
	if (!int_list)
		return (0);
	if (!args_are_correct(argc, argv, int_list))
	{
		ft_printf("Error\n");
		return (0);
	}
	stack_a = init_stack(int_list, argc - 1);
	stack_b = init_stack(NULL, 0);
	free(int_list);
	display_stack(&stack_a);
	display_index(&stack_a);
	start(&stack_a, &stack_b);
	return (0);
}

// 2147483647
// -2147483648
//	int args[] = {-69, 0, 100, 50, 10, 8};
