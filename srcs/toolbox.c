/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toolbox.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akram <akram@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 23:23:11 by akram             #+#    #+#             */
/*   Updated: 2022/12/05 23:44:59 by akram            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pile.h"

void    ft_putstr(char *str)
{
    while (*str)
    {
        write(1,str++,1);
    }
}

long    ft_atoi(char *str)
{
    int sign;
    long result;
    
    sign = 1;
    result = 0;
    while (*str == ' ' || (*str >= 9 && *str <= 13))
        str++;
    if (*str == '-')
        sign = -1;
    if (*str == '-' || *str == '+')
        str++;
    while (*str >= '0' && *str <= '9')
    {
        result = result * 10 + *str - '0';
        if((result * sign) < INT_MIN || (result * sign) > INT_MAX)
    {
        write(2,"Error\n",6);
        exit(EXIT_FAILURE);
    }
        str++;
    }
    return (result * sign);
}