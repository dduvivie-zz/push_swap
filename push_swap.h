/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduvivie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 15:27:57 by dduvivie          #+#    #+#             */
/*   Updated: 2022/08/16 20:03:24 by dduvivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "./libft/libft.h"
# include "./libft/ft_printf/ft_printf.h"
# include "./libft/get_next_line/get_next_line.h"
# include <unistd.h>
# include <stdlib.h>

typedef struct s_node	t_node;

/* structures */
typedef struct s_node{
	int		val;
	int		order;
	t_node	*next;
}				t_node;

typedef struct s_stack{
	t_node	*head;
	t_node	*tail;
	int		size;
}				t_stack;

typedef struct s_args{
	int		*array;
	int		size;
}				t_args;

t_args	*get_int_array(int argc, char *argv[]);
int		args_are_correct(t_args *args, char **str_t);
t_stack	init_stack(int *args, int len);
void	set_node_order(t_stack *stack);
void	display_stack(t_stack *stack);
void	display_node_order(t_stack *stack);
void	free_stack(t_stack *stack, int error_flag);
int		stack_is_sort(t_node *node);
void	start_sort(t_stack *stack_a, t_stack *stack_b);

/* operations */
void	swap(t_stack *stack);
void	push(t_stack *stack1, t_stack *stack2);
void	rotate(t_stack *stack);
void	reverse_rotate(t_stack *stack);
void	call_operation(int num, t_stack *stack_a, t_stack *stack_b);

/* sort functions */
void	radix_sort(t_stack *stack_a, t_stack *stack_b);
void	sort_2_int(t_stack *stack_a, t_stack *stack_b);
void	sort_3_int(t_stack *a, t_stack *b);
void	sort_4_int(t_stack *a, t_stack *b);
void	sort_5_int(t_stack *a, t_stack *b);

/* malloc free functions */
int		error_exit(t_args *args);
void	free_args(t_args *args);
void	free_stack(t_stack *stack, int error_flag);
void	free_str_array(char **t);

#endif
