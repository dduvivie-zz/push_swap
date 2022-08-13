NAME	= push_swap

LIBFT_DIR	= libft
LIBFT		= libft/libft.a

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror

SRC			= main.c check_args.c stack_init.c stack_utils.c stack_index.c start_sort.c  \
			operations.c operation_caller.c  \
			sort_radix.c sort_5_int.c sort_4_int.c sort_less_3_int.c
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
