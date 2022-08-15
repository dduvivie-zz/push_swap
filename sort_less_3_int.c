/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_less_3_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduvivie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 15:38:37 by dduvivie          #+#    #+#             */
/*   Updated: 2022/08/15 15:38:40 by dduvivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

/* Sort 2 integers. */
void	sort_2_int(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->head->val > stack_a->head->next->val)
		call_operation(0, stack_a, stack_b);
}

/* Sort 3 integers. */
void	sort_3_int(t_stack *a, t_stack *b)
{
	int	head;
	int	mid;
	int	tail;

	head = a->head->val;
	mid = a->head->next->val;
	tail = a->tail->val;
	if ((head < mid) && (head < tail))
	{
		call_operation(0, a, b);
		call_operation(5, a, b);
	}
	else if ((head > mid) && (head < tail))
		call_operation(0, a, b);
	else if ((head < mid) && (head > tail))
		call_operation(8, a, b);
	else if ((head > mid) && (head > tail) && (mid < tail))
		call_operation(5, a, b);
	else
	{
		call_operation(0, a, b);
		call_operation(8, a, b);
	}
}
