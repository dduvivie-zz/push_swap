/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduvivie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 13:10:25 by dduvivie          #+#    #+#             */
/*   Updated: 2022/01/26 13:10:27 by dduvivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>
# include <fcntl.h>
# include <limits.h>
# include "../libft.h"

/*
**  if the user does not provide a buffer_size at compilation, set default value
*/
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 256
# endif

char	*get_next_line(int fd);
size_t	ft_strlen_gnl(const char *s, int flag);
char	*ft_strjoin_gnl(char const *s1, char const *s2);
int		find_endline(char *str);
char	*ft_strdup_gnl(const char *s1);
#endif
