# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dduvivie <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/02 15:55:59 by dduvivie          #+#    #+#              #
#    Updated: 2022/06/02 15:56:02 by dduvivie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

CFLAGS 		= -Wall -Wextra -Werror
CC			= gcc

SRCS		= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
			ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
			ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c \
			ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
			ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJS		= $(SRCS:.c=.o)

# path to the ft_printf project folder
FT_PRINTF	= ./ft_printf

# path to the ft_printf project folder
GNL			= ./get_next_line


all: $(NAME)

$(NAME): $(OBJS)
	@ ar -rcs $(NAME) $(OBJS)
	@ $(MAKE) -C $(FT_PRINTF) all
	@ $(MAKE) -C $(GNL) all

	
$(OBJS): $(SRCS)
	@ $(CC) $(CFLAGS) -c $(SRCS)

clean:
	@ $(MAKE) -C $(FT_PRINTF) clean
	@ $(MAKE) -C $(GNL) clean
	@ rm -f $(OBJS)

fclean: clean
	@ rm -f $(NAME)
	@ $(MAKE) -C $(FT_PRINTF) fclean
	@ $(MAKE) -C $(GNL) fclean

re: fclean all

.PHONY: all clean fclean re