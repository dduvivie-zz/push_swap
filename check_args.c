/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduvivie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 12:57:05 by dduvivie          #+#    #+#             */
/*   Updated: 2022/08/16 20:20:08 by dduvivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

/* Convert a char string to a long int */
long	str_to_num(const char *str)
{
	long int	num;
	int			minus;

	num = 0;
	minus = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			minus = -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		num = (num * 10) + (*str - 48);
		str++;
	}
	num *= minus;
	return (num);
}

/* Check if the argument is not duplicated */
int	arg_is_duplicated(int num, int *int_list, int num_i)
{
	int	i;

	i = 0;
	while (i < num_i)
	{
		if (int_list[i] == num)
			return (1);
		i++;
	}
	return (0);
}

/* Check if the argument contains only digits */
int	arg_is_num(char *arg)
{
	int	i;

	i = 0;
	if (arg[i] == '-')
		i++;
	while (arg[i] != '\0')
	{
		if (!ft_isdigit(arg[i]))
			return (0);
		i++;
	}
	return (1);
}

/*
Return 1 (True) if:
- all arguments are integers
- there are no duplicates
*/
int	args_are_correct(t_args *args, char **str_t)
{
	int			i;
	long int	num;

	i = 0;
	args->array = malloc(args->size * sizeof(int));
	if (!args->array)
		return (0);
	while (i < args->size)
	{
		if (!ft_strlen(str_t[i]))
			return (0);
		if (!arg_is_num(str_t[i]))
			return (0);
		num = str_to_num(str_t[i]);
		if (num > INT_MAX || num < INT_MIN)
			return (0);
		if (arg_is_duplicated((int)num, args->array, i))
			return (0);
		args->array[i] = (int)num;
		i++;
	}
	return (1);
}
