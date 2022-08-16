/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduvivie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 12:57:05 by dduvivie          #+#    #+#             */
/*   Updated: 2022/08/15 19:50:06 by dduvivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	error_exit(t_args *args)
{
	write(STDERR_FILENO, "Error\n", ft_strlen("Error\n"));
	free_args(args);
	exit(1);
}

int	main(int argc, char *argv[])
{
	t_stack	stack_a;
	t_stack	stack_b;
	t_args	*args;

	if (argc < 2)
		return (0);
	args = get_int_array(argc, argv);
	stack_a = init_stack(args->array, args->size);
	stack_b = init_stack(NULL, 0);
	free_args(args);
	start_sort(&stack_a, &stack_b);
	free_stack(&stack_a, 0);
	free_stack(&stack_b, 0);
	system("leaks push_swap > .leaks_log.txt");
	return (0);
}
