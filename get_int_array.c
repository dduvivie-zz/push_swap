/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_int_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduvivie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 17:24:00 by dduvivie          #+#    #+#             */
/*   Updated: 2022/08/16 17:24:02 by dduvivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

/* Get the total number of elements after split te string */
int	get_split_len(char **t)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (t[i++] != NULL)
		len++;
	return (len);
}

/* Split the string */
char	**split_str(char *str, t_args *args, int *used_split)
{
	char	**t;

	t = ft_split(str, ' ');
	if (!t)
		error_exit(args);
	args->size = get_split_len(t);
	if (args->size == 0)
		error_exit(args);
	*used_split = 1;
	return (t);
}

/* Init args structure */
t_args	*init_args(t_args *args)
{
	args = malloc(sizeof(t_args));
	if (!args)
		error_exit(args);
	args->array = NULL;
	args->size = 0;
	return (args);
}

/* Get an int array from arguments */
t_args	*get_int_array(int argc, char *argv[])
{
	t_args	*args;
	char	**str_array;
	int		used_split;

	args = NULL;
	args = init_args(args);
	used_split = 0;
	if (argc == 2)
		str_array = split_str(argv[1], args, &used_split);
	else
	{
		args->size = argc - 1;
		str_array = argv;
		str_array++;
	}
	if (!args_are_correct(args, str_array))
	{
		if (used_split)
			free_str_array(str_array);
		error_exit(args);
	}
	if (used_split)
		free_str_array(str_array);
	return (args);
}
