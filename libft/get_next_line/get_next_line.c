/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduvivie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 17:37:36 by dduvivie          #+#    #+#             */
/*   Updated: 2022/01/25 14:40:57 by dduvivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*
This function sets the static pointer to the first char of the next line, 
so it also re-allocates memory space and free the previous memory space.
ex:
"0123\n4567\0" will be "4567\0".
*/
char	*reset_static_line(char *static_line)
{
	int		char_cut;
	char	*new_static;

	if (find_endline(static_line))
		char_cut = ft_strlen_gnl(static_line, 1);
	else
		char_cut = ft_strlen_gnl(static_line, 0);
	new_static = ft_strdup_gnl(static_line + char_cut);
	if (!new_static)
		return (NULL);
	free(static_line);
	return (new_static);
}

/*
This function allocates memory for the static pointer,
 and stocks the characters which were read from file.
When characters will append to the character array,
 it re-allocates memory space and frees the previous memory space. 
*/
char	*set_static_line(char *buff, char *static_line)
{
	char	*cpy_static_line;

	if (static_line == NULL)
	{
		static_line = ft_strdup_gnl(buff);
		if (!static_line)
			return (NULL);
	}
	else
	{
		cpy_static_line = ft_strdup_gnl(static_line);
		free(static_line);
		static_line = NULL;
		if (!cpy_static_line)
			return (NULL);
		static_line = ft_strjoin_gnl(cpy_static_line, buff);
		free(cpy_static_line);
		cpy_static_line = NULL;
		if (!static_line)
			return (NULL);
	}
	return (static_line);
}

/*
This function associates the character array which will be a line,
from the static pointer(static_line) to the character pointer(one_line).
*/
char	*get_one_line(char *static_line, char *one_line)
{
	int	i;
	int	len;

	i = 0;
	if (find_endline(static_line))
		len = ft_strlen_gnl(static_line, 1);
	else
		len = ft_strlen_gnl(static_line, 0);
	one_line = malloc((len + 1) * sizeof(char));
	if (!one_line)
	{
		free(static_line);
		static_line = NULL;
		return (NULL);
	}
	while (i != len)
	{
		one_line[i] = *static_line;
		static_line++;
		i++;
	}
	one_line[i] = '\0';
	return (one_line);
}

/*
This function reads the file with buffer in a loop, until:
 1. there is a newline(\n) in buffer
 2. there is no more bytes to read in file
then check the static_line, if there is "a line" can be return.
*/
char	*read_file(int fd, char *buff, char *one_line, char **static_line)
{
	int		bytes;

	bytes = -1;
	while (bytes != 0 && !find_endline(buff))
	{
		ft_bzero(buff, BUFFER_SIZE);
		bytes = read(fd, buff, BUFFER_SIZE);
		if (bytes == 0)
			break ;
		*static_line = set_static_line(buff, *static_line);
		if (!*static_line)
			return (NULL);
	}
	if (*static_line == NULL || ft_strlen_gnl(*static_line, 0) == 0)
		return (NULL);
	one_line = get_one_line(*static_line, one_line);
	*static_line = reset_static_line(*static_line);
	if (!*static_line)
		return (NULL);
	if (ft_strlen_gnl(*static_line, 0) == 0)
	{
		free(*static_line);
		*static_line = NULL;
	}
	return (one_line);
}

/*
The static pointer "static_line" will be used to stock characters 
 read with buffer(buff),
 and the pointer "one_line" will be the return value of the program.
*/
char	*get_next_line(int fd)
{
	char			*buff;
	char			*one_line;
	static char		*static_line = NULL;

	if (fd < 0 || fd >= OPEN_MAX || BUFFER_SIZE <= 0)
		return (NULL);
	buff = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buff)
		return (NULL);
	if (read(fd, buff, 0) < 0)
	{
		free(buff);
		return (NULL);
	}
	ft_bzero(buff, BUFFER_SIZE + 1);
	one_line = NULL;
	one_line = read_file(fd, buff, one_line, &static_line);
	free(buff);
	return (one_line);
}
