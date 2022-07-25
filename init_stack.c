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

void	add_node(t_list *list, int val)
{
	if (list->head == NULL && list->tail == NULL)
	{
		list->head = new_node(val);
		list->tail = list->head;
	}
	else
	{
		list->tail->next = new_node(val);
		list->tail = list->tail->next;
	}
}

t_list	init_stack(int *stack, int len)
{
	t_list	list;
	int		i;

	list.head = NULL;
	list.tail = NULL;
	i = -1;
	while (++i < len)
	{
		add_node(&list, stack[i]);
	}
	return (list);
}

void	display_stack(t_list *list)
{
	t_node	*current_node;

	current_node = list->head;
	while (current_node->next != NULL)
	{
		ft_printf("%d\n", current_node->val);
		current_node = current_node->next;
	}
	ft_printf("%d\n", current_node->val);
}
