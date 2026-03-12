/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mny-aro- <mny-aro-@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 16:02:51 by mny-aro-          #+#    #+#             */
/*   Updated: 2026/03/12 16:20:44 by mny-aro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_stack **stack_b)
{
	t_stack	*first;
	t_stack	*second;
	int		temp_value;

	if (!*stack_b || !(*stack_b)->next)
		return ;
	first = *stack_b;
	second = (*stack_b)->next;
	temp_value = first->value;
	first->value = second->value;
	second->value = temp_value;

	write(1, "sb\n", 3);
}