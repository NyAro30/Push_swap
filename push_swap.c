/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mny-aro- <mny-aro-@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 15:56:17 by sahrandr          #+#    #+#             */
/*   Updated: 2026/03/13 10:41:40 by mny-aro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
    t_stack	*stack_a;
    t_stack	*stack_b;
    int		i;
    t_stack	*new_node;
    int		num;
    char	**args;

    stack_a = NULL;
    stack_b = NULL;
    if (argc < 2)
        return (0);
    i = 0;
    args = NULL;
    if (argc == 2)
    {
        args = ft_split_mod(argv[1], ' ');
        if (!args)
            return (1);
    }
    else
    {
        args = argv;
        i = 1;
    }
    while (args[i] != NULL)
    {
        if (ft_isdi(args[i]) == 0)
        {
            write(2, "Error\n", 6);
            if (argc == 2)
                free_split(args);
            free_stack(&stack_a);
            return (1);
        }
        num = ft_atoi(args[i]);
        if (is_duplicate(stack_a, num) == 1)
        {
            write(2, "Error\n", 6);
            if (argc == 2)
                free_split(args);
            free_stack(&stack_a);
            return (1);
        }
        new_node = create_node(num);
        ft_lstadd_back(&stack_a, new_node);
        i++;
    }

    if (stack_size(stack_a) > 1)
        adaptive_sort(&stack_a, &stack_b);

    if (argc == 2)
        free_split(args);
    free_stack(&stack_a);
    free_stack(&stack_b);
    return (0);
}
