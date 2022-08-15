/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduvivie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 12:57:05 by dduvivie          #+#    #+#             */
/*   Updated: 2022/08/30 19:50:06 by dduvivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	stack_a;
	t_stack	stack_b;
	int		*int_list;

	if (argc < 2)
		return (0);
	int_list = get_int_list(argc, argv);
	if (!int_list)
	{
		ft_printf("Error\n");
		return (0);
	}
	stack_a = init_stack(int_list, argc - 1);
	stack_b = init_stack(NULL, 0);
	free(int_list);
	start_sort(&stack_a, &stack_b);
	free_stack(&stack_a, 0);
	free_stack(&stack_b, 0);
	system("leaks push_swap > .leaks_log.txt");
	return (0);
}
