/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pile.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akram <akram@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 23:25:59 by akram             #+#    #+#             */
/*   Updated: 2022/12/12 18:56:00 by akram            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pile.h"

t_list	*freestack(t_list *stack)
{
	t_list	*tmp;

	while (stack)
	{
		tmp = stack->next;
		free(stack);
		stack = tmp;
	}
	return (stack);
}

t_list	*free_first_element(t_list *stack_a)
{
	t_list	*tmp;

	tmp = stack_a;
	stack_a = tmp->next;
	free(tmp);
	return (stack_a);
}

t_list	*create_element(int x)
{
	t_list	*element;

	element = malloc(sizeof(*element));
	if (!element)
		return (0);
	element->nbr = x;
	element->next = NULL;
	return (element);
}

int	lengh_stack(t_list *stack_a)
{
	int	i;

	i = 0;
	while (stack_a)
	{
		i++;
		stack_a = stack_a->next;
	}
	return (i);
}

void	printstack(t_list *stack)
{
	while (stack)
	{
		printf("[%d]->", stack->nbr);
		stack = stack->next;
	}
	printf("\n");
}
