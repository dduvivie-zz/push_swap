NAME	= push_swap

LIBFT_DIR	= libft
LIBFT		= libft/libft.a

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror

SRC			= main.c init_stack.c operations.c radix_sort.c
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
