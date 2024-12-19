/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirerd <lgirerd@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 14:28:38 by lgirerd           #+#    #+#             */
/*   Updated: 2024/12/19 20:04:13 by lgirerd          ###   ########lyon.fr   */
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
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

