/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trie_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akram <akram@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 23:26:05 by akram             #+#    #+#             */
/*   Updated: 2022/12/05 23:26:08 by akram            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/pile.h"

void    sort_for_two(t_list *stack)
{
    if (stack->nbr > stack->next->nbr)
        swap_a(stack);
}

// void    trie_for_three(t_list *stack)
// {
//     if (stack->nbr > stack->next->nbr)
//         swap(stack);
// }
