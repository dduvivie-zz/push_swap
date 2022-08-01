/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduvivie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 15:27:57 by dduvivie          #+#    #+#             */
/*   Updated: 2022/07/15 15:27:59 by dduvivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "./libft/libft.h"
# include "./libft/ft_printf/ft_printf.h"
# include "./libft/get_next_line/get_next_line.h"

typedef struct s_node	t_node;

// structure
typedef struct s_node{
	int		val;
	int		index;
	t_node	*next;
}				t_node;

typedef struct s_stack{
	t_node	*head;
	t_node	*tail;
	int		size;
}				t_stack;

t_stack	init_stack(int *args, int len);
void	display_stack(t_stack *stack);
void	swap(t_stack *stack);
void	push(t_stack *stack1, t_stack *stack2);
void	rotate(t_stack *stack);
void	reverse_rotate(t_stack *stack);
void	start(t_stack *stack_a, t_stack *stack_b);
void	call_operation(int num, t_stack *stack_a, t_stack *stack_b);

void	radix_sort(t_stack *stack_a, t_stack *stack_b);
void	test(void);


#endif
