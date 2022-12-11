/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toolbox2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akram <akram@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 20:43:23 by akram             #+#    #+#             */
/*   Updated: 2022/12/11 22:09:07 by akram            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pile.h"

t_list *min_to_top(t_list *stack)
{
	int	posmin;
	int	size;

	size = lengh_stack(stack);
	posmin = search_min(stack);
	if (posmin == 2)
		stack = swap_a(stack);
	else if (posmin != 1)
	{
		while (posmin <= size)
		{
			stack = reverse_rotate_a(stack);
			posmin++;
		}
	}
	return (stack);
}

t_list *max_to_top(t_list *stack)
{
	int	posmin;
	int	size;

	size = lengh_stack(stack);
	posmin = search_max(stack);
	if (posmin == 2)
		stack = swap_a(stack);
	else if (posmin != 1)
	{
		while (posmin <= size)
		{
			stack = reverse_rotate_a(stack);
			posmin++;
		}
	}
	return (stack);
}

int	search_max(t_list *stack)
{
	t_list	*tmp;
	int		i;
	int		stock;

	tmp = stack;
	i = 1;
	stock = stack->nbr;
	while (stack)
	{
		if (stack->nbr > stock)
		{
			stock = stack->nbr;
		}
		stack = stack->next;
	}
	while (tmp->nbr != stock)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

int	search_min(t_list *stack)
{
	t_list	*tmp;
	int		i;
	int		stock;

	i = 1;
	tmp = stack;
	stock = stack->nbr;
	while (stack)
	{
		if (stack->nbr < stock)
		{
			stock = stack->nbr;
		}
		stack = stack->next;
	}
	while (tmp->nbr != stock)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}