/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trie_ultime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdjebal <akdjebal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 13:58:12 by akdjebal          #+#    #+#             */
/*   Updated: 2022/12/14 17:59:31 by akdjebal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pile.h"

int	have_pivot(t_list *stack, int *tab, int size)
{
	int	index;
	int	pivot;

	tab = tab_int(stack, size);
	tab = value_sort(tab, size);
	if (size >= 500)
		index = size / 7;
	else
		index = size / 5;
	pivot = tab[index];
	free(tab);
	return (pivot);
}

t_list	*ultime_sort(t_list *stack, t_list *stack_b, int size)
{
	int		pivot;
	int		*tab;
	t_list	*tmp;

	tab = NULL;
	while (stack)
	{
		tmp = stack;
		pivot = have_pivot(tmp, tab, size);
		while (size)
		{
			if (tmp->nbr <= pivot)
			{
				stack_b = push_b(tmp, stack_b);
				tmp = free_first_element(tmp);
			}
			else
				tmp = rotate_a(tmp);
			size--;
		}
		stack = tmp;
		size = lengh_stack(stack);
	}
	stack = max_sort_top(stack, stack_b);
	return (stack);
}
