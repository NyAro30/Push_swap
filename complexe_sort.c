/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complexe_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mny-aro- <mny-aro-@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 14:22:35 by mny-aro-          #+#    #+#             */
/*   Updated: 2026/03/10 14:35:47 by mny-aro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	complex_sort(t_stack **stack_a, t_stack **stack_b)
{
    int	bits;
    int	current_bit;

    bits = count_bits(stack_size(*stack_a));
	current_bit = 0;
	while (current_bit < bits)
	{
		process_bits(stack_a, stack_b, current_bit);
		current_bit++;
	}
}