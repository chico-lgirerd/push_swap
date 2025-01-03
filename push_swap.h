/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirerd <lgirerd@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 14:22:59 by lgirerd           #+#    #+#             */
/*   Updated: 2025/01/03 15:24:01 by lgirerd          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define MAX_SIZE 501

typedef struct s_stack
{
	int	array[MAX_SIZE];
	int	top;
}	t_stack;

void	stack_init(t_stack *stack);
void	stack_add(t_stack *stack, int val);
int		stack_pop(t_stack *stack);
int		*ft_parse_int(int argc, char **argv);
int		ft_duplicates(int *tab, int size);
void	ra(t_stack *a);
void	rb(t_stack *b);
void	pb(t_stack *a, t_stack *b);
void	pa(t_stack *a, t_stack *b);
void	sb(t_stack *b);
void	sa(t_stack *a);
void	rra(t_stack *a);
void	rrb(t_stack *b);
void	rotate_down(t_stack *stack);
void	rotate_up(t_stack *stack);
void	sort_two(t_stack *a);
void	sort_three(t_stack *a);
int		is_sorted(t_stack *stack);
#endif
