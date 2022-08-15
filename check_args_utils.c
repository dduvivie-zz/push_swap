/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduvivie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 17:24:00 by dduvivie          #+#    #+#             */
/*   Updated: 2022/08/15 17:24:02 by dduvivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int count_total_int(char *str)
{
    int elems;
    int i;
    int num_len;

    elems = 0;
    i = 0;
    num_len = 0;
    while ((str[i])
    {
        
        if (ft_isdigit(str[i]))
            num_len++;
        else
        {
            if (num_len)
            {
                elems++;
                num_len = 0;
            }
        }
    }

    
}
