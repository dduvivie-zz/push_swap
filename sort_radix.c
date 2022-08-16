/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_radix.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduvivie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 15:05:47 by dduvivie          #+#    #+#             */
/*   Updated: 2022/08/16 20:28:53 by dduvivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

/*
Sort the n-th bit.
If the bit is 0 do "pb", do "ra" if the bit is 1.
Once checked all elements of a, push all elements of b to a.
*/
void	sort_nth_bit(t_stack *a, t_stack *b, int bit)
{
	t_node	*curr_a_node;
	int		a_size;
	int		i;
	int		num;

	a_size = a->size;
	while (a_size-- > 0)
	{
		curr_a_node = a->head;
		i = 0;
		num = curr_a_node->order;
		while (i++ < bit)
			num = num >> 1;
		if ((num & 1) == 1)
			call_operation(5, a, b);
		else
			call_operation(4, a, b);
	}
	while (b->size > 0)
		call_operation(3, a, b);
}

/*
Sort the stack a, with the order number of each node. (start from 0).
Do bit-by-bit sort starting from least significant bit to most significant bit.
*/
void	radix_sort(t_stack *a, t_stack *b)
{
	int		bit;

	bit = 0;
	while (!stack_is_sort(a->head))
	{
		sort_nth_bit(a, b, bit);
		bit++;
	}
}
