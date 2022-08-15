/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduvivie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 12:57:05 by dduvivie          #+#    #+#             */
/*   Updated: 2022/08/30 19:50:06 by dduvivie         ###   ########.fr       */
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
int	args_are_correct(int argc, char *argv[], int *int_list)
{
	int			argv_i;
	int			list_i;
	long int	num;

	argv_i = 0;
	list_i = 0;

	int_list = malloc((argc - 1) * sizeof(int));
	if (!int_list)
		return (0);
	while (++argv_i < argc)
	{
		if (!arg_is_num(argv[argv_i]))
			return (0);
		num = str_to_num(argv[argv_i]);
		if (num > INT_MAX || num < INT_MIN)
			return (0);
		if (arg_is_duplicated((int)num, int_list, list_i))
			return (0);
		int_list[list_i] = (int)num;
		list_i++;
	}
	return (1);
}

int	*get_int_list(int argc, char *argv[])
{
	int	*int_list;
	int	total_arg;

	if (argc == 2)
		total_arg = count_total_int(argv[1]);

	else
}