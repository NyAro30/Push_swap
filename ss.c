/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mny-aro- <mny-aro-@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 16:10:54 by mny-aro-          #+#    #+#             */
/*   Updated: 2026/03/12 16:26:26 by mny-aro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*first;
	t_stack	*second;
	int		temp_value;

	if (!*stack_a && (*stack_a)->next)
	{
		first = *stack_a;
		second = (*stack_a)->next;
		temp_value = first->value;
		first->value = second->value;
		second->value = temp_value;
	}
	if (!*stack_b && (*stack_b)->next)
	{
		first = *stack_b;
		second = (*stack_b)->next;
		temp_value = first->value;
		first->value = second->value;
		second->value = temp_value;
	}
	
	write(1, "ss\n", 3);
}