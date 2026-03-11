/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adaptive_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mny-aro- <mny-aro-@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 10:24:24 by mny-aro-          #+#    #+#             */
/*   Updated: 2026/03/11 12:47:27 by mny-aro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	adaptive_sort(t_stack **stack_a, t_stack **stack_b)
{
	float	disorder;

	if (!*stack_a || (*stack_a)->next)
		return ;
	disorder = calculate_disorder(*stack_a);
	if (disorder ==  0)
		return ;
	assign_index(*stack_a);
	if (disorder < 0.2)
		simple_sort(stack_a, stack_b);
	else if (disorder < 0.5)
		medium_sort(stack_a, stack_b);
	else
		complexe_sort(stack_a, stack_b);
}
