/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouv.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akram <akram@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 23:25:25 by akram             #+#    #+#             */
/*   Updated: 2022/12/07 19:03:40 by akram            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pile.h"

t_list	*swap_a(t_list *stack_a)
{
	int	tmp;

	tmp = stack_a->nbr;
	stack_a->nbr = stack_a->next->nbr;
	stack_a->next->nbr = tmp;
	ft_putstr("sa\n");
	return (stack_a);
}

t_list	*rotate_a(t_list *stack_a)
{
	t_list	*tmp;
	t_list	*head;

	if (!stack_a)
		return (NULL);
	head = stack_a;
	tmp = stack_a->next;
	while (stack_a->next)
	{
		stack_a = stack_a->next;
	}
	stack_a->next = head;
	head->next = NULL;
	ft_putstr("ra\n");
	return (tmp);
}

t_list	*reverse_rotate_a(t_list *stack_a)
{
	t_list	*dernier;
	t_list	*avantder;

	if (!stack_a)
		return (NULL);
	dernier = stack_a;
	avantder = stack_a;
	while (dernier->next)
		dernier = dernier->next;
	while (avantder->next->next)
		avantder = avantder->next;
	dernier->next = stack_a;
	avantder->next = NULL;
	ft_putstr("rra\n");
	return (dernier);
}

t_list	*push_a(t_list *stack_a, t_list *stack_b)
{
	t_list	*tmp;

	if (!stack_a)
		stack_a = create_element(stack_b->nbr);
	else
	{
		tmp = stack_b;
		stack_b = stack_b->next;
		tmp->next = stack_a;
		stack_a = tmp;
	}
	ft_putstr("pa\n");
	return (stack_a);
}
