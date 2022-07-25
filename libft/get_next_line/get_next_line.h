/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduvivie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 17:38:08 by dduvivie          #+#    #+#             */
/*   Updated: 2022/01/25 14:41:01 by dduvivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
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
