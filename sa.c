/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mny-aro- <mny-aro-@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 15:19:30 by mny-aro-          #+#    #+#             */
/*   Updated: 2026/03/12 16:20:19 by mny-aro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack **stack_a)
{
    t_stack	*first;
    t_stack	*second;
    int		temp_value;

    if (!*stack_a || !(*stack_a)->next)
        return ; 
    first = *stack_a;
    second = (*stack_a)->next;
	temp_value = first->value;
    first->value = second->value;
	second->value = temp_value;
    
    write(1, "sa\n", 3);
}