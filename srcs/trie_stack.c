/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trie_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akram <akram@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 23:26:05 by akram             #+#    #+#             */
/*   Updated: 2022/12/11 02:54:44 by akram            ###   ########.fr       */
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

void ft_swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp; 
}
void	sortList(t_list *stack) 
{  
        //Node current will point to stack  
        t_list *current = stack;
		t_list *index = NULL;
        if(current == NULL) {  
            return;  
        }  
        else {  
            while(current != NULL) {  
                //Node index will point to node next to current  
                index = current->next;
                  
                while(index != NULL) {  
                    //If current node's data is greater than index's node data, swap the data between them  
                    if(current->nbr > index->nbr) 
					{
						ft_swap(&current->nbr,&index->nbr); 
						ft_putstr("sa\n");
                    }  
                    index = index->next;  
                }  
                current = current->next;  
            }      
        } 
}
// t_list	*sort_for_four(t_list *stack)
// {
// 	int max = max_element_for_four(stack);
// 	int		stocknbr;
// 	t_list	*list;
// 	t_list	*element;
// 	t_list	*compare;

// 	list = stack;
// 	element = stack;
// 	while (list)
// 	{
// 		stocknbr = list->nbr;
// 		compare = element->next;
// 		while (compare)
// 		{
// 			if (stocknbr < max)
// 			{
// 				stack = swap_a(stack);
// 			}
// 			compare = compare->next;
// 		}
// 		list = list->next;
// 		element = element->next;
// 	}
// 	return (stack);
// 	// int max = max_element_for_four(stack);
// 	// if (stack->next->next->next->nbr == max)
// 	// 	stack = sort_for_three(stack);
// 	// printf("\nmax == %d\n", stack->next->next->next->nbr);
// 	// return stack;
// 	// void	tri_4(int *A, int *B)
	
// 	// int	i;
// 	// int	min;

// 	// i = 0;
// 	// min = ft_min(A);   7 2 9 1  
// 	// while (A[0] != min)
// 	// {
// 	// 	if (A[i] != min)
// 	// 	{
// 	// 		if (A[3] == min || A[2] == min)
// 	// 		{
// 	// 			rr_ab(A);
// 	// 			ft_putstr("rra\n");
// 	// 		}
// 	// 		else
// 	// 			rotate_a(A);
// 	// 	}
// 	// 	i++;
// 	// }
// 	// push_b(A, B);
// 	// tri_3(A);
// 	// push_a(A, B);
// }
