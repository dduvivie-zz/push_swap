/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_malloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduvivie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 12:57:05 by dduvivie          #+#    #+#             */
/*   Updated: 2022/08/16 20:58:24 by dduvivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

/* Free string array */
void	free_str_array(char **t)
{
	int	i;

	i = 0;
	while (t[i] != NULL)
	{
		free(t[i]);
		t[i] = NULL;
		i++;
	}
	free(t);
	t = NULL;
}

/* Free args struct memory */
void	free_args(t_args *args)
{
	if (args)
	{
		if (args->array)
		{
			free(args->array);
			args->array = NULL;
		}
		free(args);
		args = NULL;
	}
}

/* Free stack struct memory */
void	free_stack(t_stack *stack, int error_flag)
{
	t_node	*current_node;
	t_node	*prev_node;

	current_node = stack->head;
	while (current_node != NULL)
	{
		prev_node = current_node;
		current_node = current_node->next;
		free(prev_node);
		prev_node = NULL;
	}
	if (error_flag == 1)
		exit(1);
}
