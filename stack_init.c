#include "push_swap.h"

t_node	*new_node(int num)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->val = num;
	node->next = NULL;
	node->index = -1;
	return (node);
}

void	add_node(t_stack *stack, int val)
{
	if (stack->head == NULL && stack->tail == NULL)
	{
		stack->head = new_node(val);
		stack->tail = stack->head;
	}
	else
	{
		stack->tail->next = new_node(val);
		stack->tail = stack->tail->next;
	}
}

t_stack	init_stack(int *args, int size)
{
	t_stack	stack;
	int		i;

	stack.head = NULL;
	stack.tail = NULL;
	stack.size = size;
	i = -1;
	while (++i < size)
	{
		add_node(&stack, args[i]);
	}
	if (stack.size > 0)
		set_node_index(&stack);
	return (stack);
}
