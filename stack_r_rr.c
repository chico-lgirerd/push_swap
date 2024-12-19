/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_r_rr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirerd <lgirerd@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:32:10 by lgirerd           #+#    #+#             */
/*   Updated: 2024/12/19 17:03:26 by lgirerd          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_up(t_stack *stack)
{
	int	first;
	int	i;

	if (stack->top < 0)
		return ;
	first = stack->array[stack->top];
	i = stack->top;
	while (i > 0)
	{
		stack->array[i] = stack->array[i - 1];
		i--;
	}
	stack->array[0] = first;
}

void	rotate_down(t_stack *stack)
{
	int	last;
	int	i;

	if (stack->top < 0)
		return ;
	last = stack->array[0];
	i = 0;
	while (i < stack->top)
	{
		stack->array[i] = stack->array[i + 1];
		i++;
	}
	stack->array[stack->top] = last;
}

void	ra(t_stack *a)
{
	if (a->top < 0)
		return ;
	rotate_up(a);
	write(1, "ra\n", 3);
}
