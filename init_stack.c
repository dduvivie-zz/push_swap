#include "push_swap.h"

t_node	*new_node(int num)
{
	t_node *node;

	node = malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->val = num;
	node->next = NULL;
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
	return (stack);
}

void	display_stack(t_stack *stack)
{
	t_node	*current_node;
	int		i;

	if (stack->size < 1)
		return ;
	current_node = stack->head;
	i = (stack->size * 2) + 1;
	while (i-- > 0)
		ft_printf("-");
	ft_printf("\n");
	while (current_node->next != NULL)
	{
		ft_printf("|%d", current_node->val);
		current_node = current_node->next;
	}
	ft_printf("|%d|\n", current_node->val);
	i = (stack->size * 2) + 1;
	while (i-- > 0)
		ft_printf("-");
	ft_printf("\n");
}
