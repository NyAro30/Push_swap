/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mny-aro- <mny-aro-@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 13:45:00 by mny-aro-          #+#    #+#             */
/*   Updated: 2026/03/14 13:45:25 by mny-aro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_flag(char *arg)
{
    if (ft_strcmp(arg, "--simple") == 0 || ft_strcmp(arg, "--medium") == 0
        || ft_strcmp(arg, "--complex") == 0 || ft_strcmp(arg, "--adaptive") == 0
        || ft_strcmp(arg, "--bench") == 0)
        return (1);
    return (0);
}

void	set_flag(char *arg, t_options *opts)
{
    if (ft_strcmp(arg, "--simple") == 0)
        opts->strategy = STRATEGY_SIMPLE;
    else if (ft_strcmp(arg, "--medium") == 0)
        opts->strategy = STRATEGY_MEDIUM;
    else if (ft_strcmp(arg, "--complex") == 0)
        opts->strategy = STRATEGY_COMPLEX;
    else if (ft_strcmp(arg, "--bench") == 0)
        opts->bench_mode = 1;
}
