/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akram <akram@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:57:38 by akram             #+#    #+#             */
/*   Updated: 2022/07/29 02:49:13 by akram            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "push_swap.h"


// void    ft_sa(t_pusw *lst)
// {
//     int tmp;
    
//     if (lst-> len_a > 0)
//     {
//         tmp           = lst-> stack_a;
//         lst-> stack_a = lst-> stack_a;
//         lst-> stack_a = lst-> tmp;
//         printf("sa\n"); 
//     }
// }

// void    ft_sb(int *lst)
// {
//     int tmp;
    
//     if (lst->len_b > 0)
//     {
//         tmp           = lst-> stack_b;
//         lst-> stack_b = lst-> stack_b;
//         lst-> stack_b = lst-> tmp;
//         printf("sb\n"); 
//     }
    
// }

// void    ft_sab(t_pusw *lst)
// {
//     int tmp;

//     if (lst-> len_a > 0 || lst-> len_b > 0)
//     {
//         if (lst-> len_a > 0)
//         {
//             tmp           = lst -> stack_a;
//             lst-> stack_a = lst -> stack_a;
//             lst-> stack_a = lst -> tmp; 
//         }
//         if (lst-> len_b > 0)
//         {
//             tmp           = lst-> stack_b;
//             lst-> stack_b = lst-> stack_b;
//             lst-> stack_b = lst-> tmp;
//         }
//         printf("ss\n"); 
//     }
// }

stack new_stack_a()
{
    return NULL;       //va me retourner une pile vide 
}

int empty_stack(stack st_a)
{
    if (st_a == NULL)   //Verif si la pile a (st_a) est vide 
        return 1;
    return 0;
}
int main()
{
    stack st_a = new_stack_a();
    
    if (empty_stack(st_a))
        printf("Pile A vide\n");
    else
        printf("Pile A remplie");
}

