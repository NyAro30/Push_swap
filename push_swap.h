/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mny-aro- <mny-aro-@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 14:42:45 by sahrandr          #+#    #+#             */
/*   Updated: 2026/03/10 14:04:38 by mny-aro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
	struct s_stack	*prev;
}					t_stack;

t_stack				*create_node(int value);
void				free_stack(t_stack **stack);
int					ft_atoi(const char *nptr);
int					ft_isdi(char *str);
char				**ft_split_mod(char const *s, char c);
int					is_duplicate(t_stack *stack_a, int num);
int					main(int argc, char **argv);
void				free_split(char **tab);
char				*ft_substr(char const *s, unsigned int start, size_t len);
void				ft_lstadd_back(t_stack **stack, t_stack *new_node);
int					stack_size(t_stack *stack);
void				bring_to_top(t_stack **stack_a, int position, int size);
float				calculate_disorder(t_stack *stack_a);
int					find_min_position(t_stack *stack);
int					find_max_position(t_stack *stack);
int					is_in_chunk(int index, int chunk_min, int chunk_max);
int					find_in_chunk(t_stack *stack, int chunk_min, int chunk_max);
int					get_bit(int number, int bit_position);
static void			process_bits(t_stack **stack_a, t_stack **stack_b, int bit);
int					count_bits(int n);


#endif