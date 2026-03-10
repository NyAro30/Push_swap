/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mny-aro- <mny-aro-@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 14:00:21 by mny-aro-          #+#    #+#             */
/*   Updated: 2026/03/10 14:16:59 by mny-aro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	process_bits(t_stack **stack_a, t_stack **stack_b, int bit)
{
    int	size;
    int	i;

    size = stack_size(*stack_a);
	i = 0;
	while (i < size)
	{
		if (get_bit((*stack_a)->index, bit) == 0)
			ra(stack_a);
		else
			pb(stack_a, stack_b);
		i++;
	}
	while (*stack_b)
	{
		pa(stack_a, stack_b);
	}		
}
