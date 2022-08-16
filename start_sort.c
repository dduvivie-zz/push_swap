/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduvivie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 12:57:05 by dduvivie          #+#    #+#             */
/*   Updated: 2022/08/16 20:29:55 by dduvivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

/* Call the sort function, depend on the size of the stack */
void	start_sort(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_is_sort(stack_a->head) || stack_a->size == 1)
		return ;
	else if (stack_a->size == 2)
		sort_2_int(stack_a, stack_b);
	else if (stack_a->size == 3)
		sort_3_int(stack_a, stack_b);
	else if (stack_a->size == 4)
		sort_4_int(stack_a, stack_b);
	else if (stack_a->size == 5)
		sort_5_int(stack_a, stack_b);
	else
		radix_sort(stack_a, stack_b);
}
