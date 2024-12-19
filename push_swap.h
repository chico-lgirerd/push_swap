/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirerd <lgirerd@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 14:22:59 by lgirerd           #+#    #+#             */
/*   Updated: 2024/12/19 17:05:39 by lgirerd          ###   ########lyon.fr   */
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
void	pb(t_stack *a, t_stack *b);
void	pa(t_stack *a, t_stack *b);
void	sb(t_stack *b);
void	sa(t_stack *a);
void	rotate_down(t_stack *stack);

#endif
