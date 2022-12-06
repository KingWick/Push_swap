/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pile.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdjebal <akdjebal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 23:25:59 by akram             #+#    #+#             */
/*   Updated: 2022/12/06 14:41:23 by akdjebal         ###   ########.fr       */
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

t_list	*push_stack(t_list *stack_a, char *s)
{
    //t_list *element;
	t_list *tmp;

    tmp = stack_a;
    if (!stack_a)
		stack_a = create_element(ft_atoi(s));
    else
    {
        tmp->next =  create_element(ft_atoi(s));
        tmp = tmp->next;
    }
    // if (st == NULL)
    //     return element; 
    // tmp = st;
    // while (tmp->next)
    // {
    //     tmp = tmp->next;
    // }
    // tmp->next = element;
    return (stack_a);
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
}
