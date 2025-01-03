/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirerd <lgirerd@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 14:28:38 by lgirerd           #+#    #+#             */
/*   Updated: 2025/01/03 15:24:49 by lgirerd          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_init(t_stack *stack)
{
	stack->top = -1;
}

void	stack_add(t_stack *stack, int val)
{
	stack->array[++stack->top] = val;
}

int	stack_pop(t_stack *stack)
{
	int	popped;

	popped = stack->array[stack->top];
	stack->top--;
	return (popped);
}

int is_sorted(t_stack *stack)
{
	int	i;

	i = stack->top;
	while (i != 0)
	{
		if (stack->array[i] > stack->array[i - 1])
			return (0);
		i--;
	}
	return (1);
}
