/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trie_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdjebal <akdjebal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 23:26:05 by akram             #+#    #+#             */
/*   Updated: 2022/12/13 15:37:17 by akdjebal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pile.h"

t_list	*sort_for_two(t_list *stack)
{
	if (stack->nbr > stack->next->nbr)
		stack = swap_a(stack);
	return (stack);
}

t_list	*sort_for_three_2(t_list *stack)
{
	int	one;
	int	two;
	int	three;

	one = stack->nbr;
	two = stack->next->nbr;
	three = stack->next->next->nbr;
	if (one < two && two > three && three < one)
	{
		stack = reverse_rotate_a(stack);
		return (stack);
	}
	else if (one < two && two > three && three > one)
	{
		stack = swap_a(stack);
		stack = rotate_a(stack);
	}
	else if (one > two && two > three && three < one)
	{
		stack = swap_a(stack);
		stack = reverse_rotate_a(stack);
	}
	return (stack);
}

t_list	*sort_for_three(t_list *stack)
{
	int	one;
	int	two;
	int	three;

	one = stack->nbr;
	two = stack->next->nbr;
	three = stack->next->next->nbr;
	if (one > two && two < three && three > one)
	{
		stack = swap_a(stack);
		return (stack);
	}
	else if (one > two && two < three && three < one)
	{
		stack = rotate_a(stack);
		return (stack);
	}
	stack = sort_for_three_2(stack);
	return (stack);
}

t_list	*sort_for_four(t_list *stack, t_list *stack_b)
{
	if (check_order(stack))
		return (stack);
	stack = min_to_top(stack);
	stack_b = push_b(stack, stack_b);
	stack = free_first_element(stack);
	stack = sort_for_three(stack);
	stack = push_a(stack, stack_b);
	stack_b = free_first_element(stack_b);
	return (stack);
}

t_list	*sort_for_five(t_list *stack, t_list *stack_b)
{
	if (check_order(stack))
		return (stack);
	stack = min_to_top(stack);
	stack_b = push_b(stack, stack_b);
	stack = free_first_element(stack);
	stack = max_to_top(stack);
	stack_b = push_b(stack, stack_b);
	stack = free_first_element(stack);
	stack = sort_for_three(stack);
	stack = push_a(stack, stack_b);
	stack_b = free_first_element(stack_b);
	stack = rotate_a(stack);
	stack = push_a(stack, stack_b);
	stack_b = free_first_element(stack_b);
	return (stack);
}
