/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akram <akram@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 01:00:44 by akram             #+#    #+#             */
/*   Updated: 2022/07/29 02:49:12 by akram            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

// typedef enum
// {
//     false, 
//     true
// }bool;


/* Definition de la pile */

typedef struct stack_element
{
    int val;
    struct stack_element *next;
}*stack;

stack new_stack_a(void); // creation de la nouvelle pile A 
int empty_stack(stack st_a);

#endif
