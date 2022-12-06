/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouv3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdjebal <akdjebal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 23:24:24 by akram             #+#    #+#             */
/*   Updated: 2022/12/06 13:41:04 by akdjebal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pile.h"

void	swap_a_b(t_list *stack_a, t_list *stack_b)
{
	swap_a(stack_a);
	swap_b(stack_b);
}

void	rotate_a_b(t_list *stack_a, t_list *stack_b)
{
	rotate_a(stack_a);
	rotate_b(stack_b);
}

void	reverse_rotate_a_b(t_list *stack_a, t_list *stack_b)
{
	reverse_rotate_a(stack_a);
	reverse_rotate_b(stack_b);
}
