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
	t_node	*next;
}				t_node;

typedef struct s_list{
	t_node	*head;
	t_node	*tail;
}				t_list;

t_list	init_stack(int *stack, int len);
void	display_stack(t_list *list);

#endif
