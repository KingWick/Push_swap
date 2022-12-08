/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trie_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akram <akram@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 23:26:05 by akram             #+#    #+#             */
/*   Updated: 2022/12/07 19:43:28 by akram            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pile.h"

t_list  *sort_for_two(t_list *stack)
{
    if (stack->nbr > stack->next->nbr)
        stack = swap_a(stack);
    return stack;
}

t_list *sort_for_three_2(t_list *stack)
{
    int one;
    int two;
    int three;
    
    one = stack->nbr;
    two = stack->next->nbr;
    three = stack->next->next->nbr;
    if (one < two && two > three && three < one)
    {
        stack = reverse_rotate_a(stack);
        return (stack);
    }
    else if (one > two && two > three && three < one)
    {
        stack = swap_a(stack);
        stack = reverse_rotate_a(stack);
    }
    return (stack);
}

t_list  *sort_for_three(t_list *stack)
{
    int one;
    int two;
    int three;
    
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
