/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouv2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akram <akram@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 23:25:17 by akram             #+#    #+#             */
/*   Updated: 2022/12/05 23:35:05 by akram            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pile.h"

t_list  *swap_b(t_list *stack_b)
{
    int tmp;
    
    tmp = stack_b->nbr; 
    stack_b->nbr = stack_b->next->nbr;
    stack_b->next->nbr = tmp;
    ft_putstr("sb\n");
    return (stack_b);
}

t_list  *rotate_b(t_list *stack_b)
{
    if (!stack_b)
        return NULL;
    t_list *tmp;
    t_list *head;
    
    head = stack_b;
    tmp = stack_b->next;
    while (stack_b->next)
    {
        stack_b = stack_b->next;
    }
    stack_b->next = head;
    head->next = NULL;
    ft_putstr("rb\n");
    return (tmp);
}

t_list  *reverse_rotate_b(t_list *stack_b)
{
    if (!stack_b)
        return NULL;
    t_list    *dernier;
    t_list    *avantder;

    dernier = stack_b;
    avantder = stack_b;
    while (dernier->next)
    {
        dernier = dernier->next;
    }
    while (avantder->next->next)
            avantder = avantder->next;
    dernier->next = stack_b;
    avantder->next = NULL;
    ft_putstr("rrb\n");
    return (dernier);
}

t_list  *push_b(t_list *stack_a, t_list *stack_b)
{
    t_list *tmp;
    
    if (!stack_b)
        stack_b = create_element(stack_a->nbr);
    else
    {
        tmp = stack_a;
        stack_a = stack_a->next; 
        tmp->next = stack_b;
        stack_b = tmp;
    }
    ft_putstr("pb\n");
    return (stack_b);
}