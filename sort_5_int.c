/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduvivie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 16:02:28 by dduvivie          #+#    #+#             */
/*   Updated: 2022/08/15 16:02:29 by dduvivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

/* Re-apply the order number to each node. */
void	update_node_order(t_stack *a)
{
	t_node	*current_node;

	current_node = a->head;
	while (current_node != NULL)
	{
		current_node->order--;
		current_node = current_node->next;
	}
}

/*
Sort 5 integers.
Do opertions to place the minimum node at the top of stack a, 
push it to stack b then call the sort_4_int function.
*/
void	sort_5_int(t_stack *a, t_stack *b)
{
	while (a->head->order != 0)
	{
		if (a->tail->order == 0)
			call_operation(8, a, b);
		else if (a->head->next->order == 0)
			call_operation(0, a, b);
		else if (a->head->next->next->order == 0)
			call_operation(5, a, b);
		else
			call_operation(8, a, b);
	}
	call_operation(4, a, b);
	update_node_order(a);
	sort_4_int(a, b);
	call_operation(3, a, b);
}
