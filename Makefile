# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dduvivie <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/01 16:04:55 by dduvivie          #+#    #+#              #
#    Updated: 2022/08/16 19:56:58 by dduvivie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME	= push_swap

LIBFT_DIR	= libft
LIBFT		= libft/libft.a

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror

SRC			= main.c 			\
			get_int_array.c		\
			check_args.c 		\
			stack_init.c 		\
			stack_utils.c 		\
			set_node_order.c 	\
			start_sort.c 		\
			operations.c 		\
			operation_caller.c 	\
			sort_radix.c 		\
			sort_5_int.c 		\
			sort_4_int.c 		\
			sort_less_3_int.c	\
			free_malloc.c

OBJ			= $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ $(MAKE) -C $(LIBFT_DIR) all
	@ $(CC) -o $(NAME) $(OBJ) $(LIBFT)

clean:
	@ $(MAKE) -C $(LIBFT_DIR) clean
	@ rm -f $(OBJ)

fclean: clean
	@ rm -f $(NAME)
	@ $(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
