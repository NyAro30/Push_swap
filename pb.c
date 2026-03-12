/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mny-aro- <mny-aro-@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 16:27:07 by mny-aro-          #+#    #+#             */
/*   Updated: 2026/03/12 16:48:00 by mny-aro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_stack **stack_a, t_stack **stack_b)
{
    t_stack	*node;

    if (!*stack_a)// Si A est vide, rien à faire
        return ;
    
    // Étape 1 : Sauvegarder le nœud
    node = *stack_a;
    
    // Étape 2 : Retirer de A
    *stack_a = (*stack_a)->next;
    if (*stack_a)
        (*stack_a)->prev = NULL;
    
    // Étape 3 : Préparer le nœud
    node->next = *stack_b;
    node->prev = NULL;
    
    // Étape 4 : Attacher à B
    if (*stack_b)
        (*stack_b)->prev = node;
    *stack_b = node;
    
    write(1, "pb\n", 3);
}