/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toolbox3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akram <akram@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:20:17 by akram             #+#    #+#             */
/*   Updated: 2022/12/12 16:55:41 by akram            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pile.h"

int	*tab_int(t_list *stack, int size)
{
	int	i;
	int	*tab;                   // fonction principale rempli un tableau de int avec la valeur de le stack ?

	i = 0;
	tab = malloc(sizeof(int) * size + 1); // pk le + 1 ?
	if (!tab)
		return (NULL);
	while (i < size) // size == la taille de la stack ?
	{
		tab[i] = stack->nbr;
		i++;
		stack = stack->next; // pk on incremente aussi la stack ? resolu en regardant 1 ligne au dessus
	}
	return (tab);
}

int *value_sort(int *tab, int len) // mettre un nom plus explicif  
{
	long	tmp;
	int		posnbr;

	tmp = 0;
	posnbr = 0;                                      // fonction principale le but de celle ci ? 
	while (posnbr < len - 1) // pk -1 ? 
	{
		if (tab[posnbr] <= tab[posnbr + 1]) 
			posnbr++;
		else
		{
			tmp = tab[posnbr]; // interet de swap ? 
			tab[posnbr] = tab[posnbr + 1]; // pk + 1 ?
			tab[posnbr + 1] = tmp;
			posnbr = 0;
		}
	}
	return (tab);
}

t_list	*max_sort_top2(t_list *stack_b, int posmax, int size)
{
	if (posmax <= size / 2) // pk encore sous diviser la taille ?
	{
		while (posmax && posmax != 1) // posmax different de nul et de la position 1 ?
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
		size = lengh_stack(stack_b); // pk calculer la taille a chaque fois ?
		posmax = search_max(stack_b);
		stack_b = max_sort_top2(stack_b, posmax, size); // permet de mettre le nombre max au deesus de la stack B avant de le mettre sur A ? 
		stack_a = push_a(stack_a, stack_b);
		stack_b = free_first_element(stack_b);
	}
	return (stack_a);
}