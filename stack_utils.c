#include "push_swap.h"

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