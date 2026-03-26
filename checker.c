/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mny-aro- <mny-aro-@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 15:04:59 by sahrandr          #+#    #+#             */
/*   Updated: 2026/03/26 17:31:18 by mny-aro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		checker_fill_stack(t_stack **stack_a, char **args, int must_free);
int		do_instruction(char *line, t_stack **a, t_stack **b);
char	*read_instruction(void);

static int	read_and_apply(t_stack **a, t_stack **b)
{
	char	*line;

	line = read_instruction();
	while (line)
	{
		if (do_instruction(line, a, b))
			return (write(2, "Error\n", 6), free(line), 1);
		free(line);
		line = read_instruction();
	}
	return (0);
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (argc < 2)
		return (0);
	if (checker_fill_stack(&a, argv + 1, 0))
		return (1);
	if (read_and_apply(&a, &b))
		return (free_stack(&a), free_stack(&b), 1);
	if (is_sorted(a) && stack_size(b) == 0)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	free_stack(&a);
	free_stack(&b);
	return (0);
}
