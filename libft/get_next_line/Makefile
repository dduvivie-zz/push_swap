
NAME		= libft.a
LIBFT		= libft

CFLAGS 		= -Wall -Wextra -Werror
CC			= gcc

SRCS		= get_next_line.c \
			get_next_line_utils.c \
			get_next_line_bonus.c \
			get_next_line_utils_bonus.c \

OBJS		= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@ cp ../libft.a $(NAME)
	@ ar -rcs $(NAME) $(OBJS)
	@ mv $(NAME) ../libft.a
	
$(OBJS): $(SRCS)
	@ $(CC) $(CFLAGS) -c $(SRCS)

clean:
	@ rm -f $(OBJS)

fclean: clean
	@ rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re