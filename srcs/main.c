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


t_list  *start(t_list *stack_a, char **av, int ac)
{
    int i = 1;
    t_list *tmp = NULL;

    while (i < ac)
    {
        if(parsing(av[i]) == 1)
            error(stack_a);
        if(!stack_a)
     {
         stack_a = create_element(ft_atoi(av[i]));
         tmp = stack_a;
     }
    else
    {
        tmp->next =  create_element(ft_atoi(av[i]));
        tmp = tmp->next;
    }
        i++;
    }
    check_order(stack_a);
    check_doublon(stack_a);
    return (stack_a);
}

int main(int ac, char **av)
{
    t_list *stack_a = NULL;
    //t_list *stack_b = NULL;
    int size = 0;

    if (ac < 2)
        return 0;
    stack_a = start(stack_a, av, ac);
    stack_a = reverse_rotate_a(stack_a);
    printstack(stack_a);
    if (size == 2)
        stack_a = sort_for_two(stack_a);
    if (size == 3)
        stack_a = sort_for_three(stack_a);
    stack_a = freestack(stack_a);
    return 0;
}