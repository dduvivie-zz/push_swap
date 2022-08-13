#include "push_swap.h"

void	head_index_is_0(t_stack *a, t_stack *b)
{
	int	second;
	int	third;
	int	tail;

	second = a->head->next->index;
	third = a->head->next->next->index;
	tail = a->tail->index;
	if ((second == 3) && (third == 1) && (tail == 2))
		call_operation(0, a, b);
	else
	{
		call_operation(4, a, b);
		sort_3_int(a, b);
		call_operation(3, a, b);
	}
}

void	head_index_is_1(t_stack *a, t_stack *b)
{
	int	second;
	int	third;
	int	tail;

	second = a->head->next->index;
	third = a->head->next->next->index;
	tail = a->tail->index;
	if (second == 0 || (second == 3 && third == 0))
		call_operation(0, a, b);
	else if ((second == 2 && third == 0) || (second == 3 && third == 2))
		call_operation(5, a, b);
	else
		call_operation(8, a, b);
}

void	head_index_is_2(t_stack *a, t_stack *b)
{
	int	second;
	int	third;
	int	tail;

	second = a->head->next->index;
	third = a->head->next->next->index;
	tail = a->tail->index;
	if (second == 3 || (second == 0 && third == 3))
		call_operation(5, a, b);
	else if (second == 1 || (second == 0 && third == 1))
		call_operation(0, a, b);
}

void	head_index_is_3(t_stack *a, t_stack *b)
{
	int	second;
	int	third;
	int	tail;

	second = a->head->next->index;
	third = a->head->next->next->index;
	tail = a->tail->index;
	if (second == 1 && third == 2)
		call_operation(8, a, b);
	else if (second == 2)
		call_operation(0, a, b);
	else
		call_operation(5, a, b);
}

void	sort_4_int(t_stack *a, t_stack *b)
{
	int	head;

	while (!stack_is_sort(a->head))
	{
		head = a->head->index;
		if (head == 0)
			head_index_is_0(a, b);
		else if (head == 1)
			head_index_is_1(a, b);
		else if (head == 2)
			head_index_is_2(a, b);
		else
			head_index_is_3(a, b);
	}
}
