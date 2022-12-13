/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pars.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdjebal <akdjebal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 23:25:51 by akram             #+#    #+#             */
/*   Updated: 2022/12/13 17:09:07 by akdjebal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pile.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	check_doublon(t_list *st)
{
	int		stocknbr;
	t_list	*list;
	t_list	*element;
	t_list	*compare;

	list = st;
	element = st;
	while (list)
	{
		stocknbr = list->nbr;
		compare = element->next;
		while (compare)
		{
			if (stocknbr == compare->nbr)
			{
				error(st);
				return (0);
			}
			compare = compare->next;
		}
			list = list->next;
			element = element->next;
	}
	return (0);
}

int	parsing(char *av)
{
	long long	i;

	i = 0;
	while (av[i])
	{
		if (av[i] == '-' || (av[i] == '+' && av[i + 1]))
			i++;
		if (ft_atoi(av) > INT_MAX || ft_atoi(av) < INT_MIN)
			return (1);
		if (ft_isdigit(av[i]) == 0)
			return (1);
		i++;
	}
	return (0);
}

int	check_order(t_list *st)
{
	while (st->next)
	{
		if (st->nbr < st->next->nbr && st->next != NULL)
			st = st->next;
		else
			return (0);
	}
	return (1);
}

void	error(t_list *st)
{
	write(2, "Error\n", 6);
	freestack(st);
	exit(1);
}
