/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toolbox.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdjebal <akdjebal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 23:23:11 by akram             #+#    #+#             */
/*   Updated: 2022/12/09 17:41:57 by akdjebal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pile.h"

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

long	ft_atoi(char *str)
{
	int		sign;
	long	result;

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
		if ((result * sign) < INT_MIN || (result * sign) > INT_MAX)
		{
			write(2, "Error\n", 6);
			exit(EXIT_FAILURE);
		}
		str++;
	}
	return (result * sign);
}

int min_element(t_list *stack)
{
	int i;
	int stock;
	t_list *tmp;
	
	i = 1;
	tmp = stack;
	stock = stack->nbr;
	while (stack)
	{
		if (stack->nbr < stock)
			stock = stack->nbr;
		stack = stack->next;
	}
	while (tmp->nbr != stock)
	{
		tmp = tmp->next;
		i++;
	}
	printf("element le plus petit == %d\n", stock);
	printf("%d", i);
	return (i);
}

int max_element(t_list *stack)
{
	int i;
	int stock;
	t_list *tmp;
	
	i = 1;
	tmp = stack;
	stock = stack->nbr;
	while (stack)
	{
		if (stack->nbr > stock)
			stock = stack->nbr;
		stack = stack->next;
	}
	while (tmp->nbr != stock)
	{
		tmp = tmp->next;
		i++;
	}
	printf("\nelement le plus grand == %d\n", stock);
	printf("%d", i);
	return (i);
}