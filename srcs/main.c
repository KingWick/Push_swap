/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akram <akram@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 23:24:51 by akram             #+#    #+#             */
/*   Updated: 2022/12/05 23:24:51 by akram            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/pile.h"

int main(int ac, char **av)
{
    t_list *stack_a = NULL;
    t_list *stack_b = NULL;
    t_list *tmp;
    int size;

    int i = 1;
    if (ac < 2)
        return 0;
    while (i < ac)
    {
        if(parsing(av[i]) == 1)
            error(stack_a);
        if (!stack_a)
     {
         stack_a = create_element(ft_atoi(av[i]));
         tmp = stack_a;
     }
    else
    {
        tmp->next =  create_element(ft_atoi(av[i]));
        tmp = tmp->next;
    }
        size = lengh_stack(stack_a);
        i++;
    }
    check_order(stack_a);
    check_doublon(stack_a);
    if (size == 2)
        sort_for_two(stack_a);
    //if (size == 3)
    //     trie_for_three(stack_a);
    
    //stack_a = rotate_a(stack_a);
    //stack_a = swap_a(stack_a);
    //stack_a = reverse_rotate_a(stack_a);
    //stack_b = push_b(stack_a,stack_b);
    //stack_a = free_first_element(stack_a);

    printf("Stack-A == ");
    printstack(stack_a);
    printf("\nStack-B == ");
    printstack(stack_b);

    // if (stack_a == NULL)
    //     printf("stack_a vide\n");
    // else
    //     printf("stack_a rempli\n");

    stack_a = freestack(stack_a);

    // if (stack_a == NULL)
    //     printf("\nstack_a vide\n");
    // else
    //     printf("stack_a rempli\n");
    return 0;
}