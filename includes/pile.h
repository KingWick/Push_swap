/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pile.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akram <akram@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 23:23:50 by akram             #+#    #+#             */
/*   Updated: 2022/12/05 23:23:50 by akram            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PILE_H
# define PILE_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

typedef	struct s_list
{
	int				nbr;
    struct	s_list *next;
}				t_list;

//----Stack---//

t_list  *start(t_list *stack_a, char **av, int ac);
t_list	*create_element(int x);
t_list	*freestack(t_list *stack);
t_list	*free_first_element(t_list *stack_a);
int		lengh_stack(t_list *stack_a);
void	printstack(t_list *stack);

//--parsing--//

int		check_order(t_list *st);
int		check_doublon(t_list *st);
int		parsing(char *av);
void	error(t_list *st);

//------mouv-----//

t_list	*push_a(t_list *stack_a, t_list *stack_b);
t_list	*swap_a(t_list *stack_a);
t_list	*rotate_a(t_list *stack_a);
t_list	*reverse_rotate_a(t_list *stack_a);
t_list	*push_b(t_list *stack_a, t_list *stack_b);
t_list	*swap_b(t_list *stack_b);
t_list	*rotate_b(t_list *stack_b);
t_list	*reverse_rotate_b(t_list *stack_b);
void	swap_a_b(t_list *stack_a, t_list *stack_b);
void	rotate_a_b(t_list *stack_a, t_list *stack_b);
void	reverse_rotate_a_b(t_list *stack_a, t_list *stack_b);

//--------Sort------//

t_list	*sort_for_two(t_list *stack);
t_list	*sort_for_three(t_list *stack);
t_list	*sort_for_four(t_list *stack, t_list *stack_b);
t_list	*sort_for_five(t_list *stack, t_list *stack_b);
t_list	*ultime_sort(t_list *stack, t_list *stack_b);


//----toolbox-----//

t_list  *min_to_top(t_list *stack);
t_list  *max_to_top(t_list *stack);
int	    search_min(t_list *stack);
int	    search_max(t_list *stack);
long	ft_atoi(char *str);
void	ft_putstr(char *str);

#endif