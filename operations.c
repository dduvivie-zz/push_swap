/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduvivie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 14:45:53 by dduvivie          #+#    #+#             */
/*   Updated: 2022/08/15 14:45:54 by dduvivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

/*
Swap the first 2 elements at the top of the stack.
Do nothing if there is only one or no elements.
*/
void	swap(t_stack *stack)
{
	t_node	*first_node;
	t_node	*second_node;

	if (stack->size > 1)
	{
		first_node = stack->head;
		second_node = stack->head->next;
		first_node->next = second_node->next;
		stack->head = second_node;
		stack->head->next = first_node;
	}
	if (stack->size == 2)
	{
		stack->tail = stack->head->next;
	}
}

/*
Take the first element at the top of stack1 and put it at the top of stack2.
Do nothing if stack1 is empty.
*/
void	push(t_stack *stack1, t_stack *stack2)
{
	t_node	*head1;
	t_node	*head2;

	if (stack1->size < 1)
		return ;
	head1 = stack1->head;
	head2 = stack2->head;
	stack1->head = stack1->head->next;
	stack2->head = head1;
	stack2->head->next = head2;
	stack1->size--;
	stack2->size++;
	if (stack2->tail == NULL)
		stack2->tail = stack2->head;
	if (stack1->size == 0)
		stack1->tail = NULL;
}

/*
Shift up all elements of the stack by 1.
The first element becomes the last one.
*/
void	rotate(t_stack *stack)
{
	t_node	*new_head;

	if (stack->size < 2)
		return ;
	new_head = stack->head->next;
	stack->head->next = NULL;
	stack->tail->next = stack->head;
	stack->tail = stack->tail->next;
	stack->head = new_head;
}

/*
Shift down all elements of the stack by 1.
The last element becomes the first one.
*/
void	reverse_rotate(t_stack *stack)
{
	t_node	*new_tail;
	int		num;

	if (stack->size < 2)
		return ;
	new_tail = stack->head;
	num = 1;
	while (++num < stack->size)
		new_tail = new_tail->next;
	stack->tail->next = stack->head;
	stack->head = stack->tail;
	stack->tail = new_tail;
	stack->tail->next = NULL;
}
