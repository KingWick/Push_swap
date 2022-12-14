/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toolbox3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdjebal <akdjebal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:20:17 by akram             #+#    #+#             */
/*   Updated: 2022/12/14 17:57:10 by akdjebal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pile.h"

int	*tab_int(t_list *stack, int size)
{
	int	i;
	int	*tab;

	i = 0;
	tab = malloc(sizeof(int) * size + 1);
	if (!tab)
		return (NULL);
	while (i < size)
	{
		tab[i] = stack->nbr;
		i++;
		stack = stack->next;
	}
	return (tab);
}

int	*value_sort(int *tab, int len)
{
	long	tmp;
	int		posnbr;

	tmp = 0;
	posnbr = 0;
	while (posnbr < len - 1)
	{
		if (tab[posnbr] <= tab[posnbr + 1])
			posnbr++;
		else
		{
			tmp = tab[posnbr];
			tab[posnbr] = tab[posnbr + 1];
			tab[posnbr + 1] = tmp;
			posnbr = 0;
		}
	}
	return (tab);
}

t_list	*max_sort_top2(t_list *stack_b, int posmax, int size)
{
	if (posmax <= size / 2)
	{
		while (posmax && posmax != 1)
		{
			stack_b = rotate_b(stack_b);
			posmax--;
		}
	}
	else if (posmax != 1)
	{
		while (posmax <= size)
		{
			stack_b = reverse_rotate_b(stack_b);
			posmax++;
		}
	}
	return (stack_b);
}

t_list	*max_sort_top(t_list *stack_a, t_list *stack_b)
{
	int	posmax;
	int	size;

	while (stack_b)
	{
		size = lengh_stack(stack_b);
		posmax = search_max(stack_b);
		stack_b = max_sort_top2(stack_b, posmax, size);
		stack_a = push_a(stack_a, stack_b);
		stack_b = free_first_element(stack_b);
	}
	return (stack_a);
}
