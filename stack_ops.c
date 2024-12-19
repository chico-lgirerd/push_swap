/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_ops.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirerd <lgirerd@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 14:40:03 by lgirerd           #+#    #+#             */
/*   Updated: 2024/12/19 16:30:21 by lgirerd          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

void	sa(t_stack *a)
{
	int	first;
	int	second;

	first = stack_pop(a);
	second = stack_pop(a);
	stack_add(a, first);
	stack_add(a, second);
	write(1, "sa\n", 3);
}

void	sb(t_stack *b)
{
	int	first;
	int	second;

	first = stack_pop(b);
	second = stack_pop(b);
	stack_add(b, first);
	stack_add(b, second);
	write(1, "sb\b", 3);
}

void	pa(t_stack *a, t_stack *b)
{
	int	val;

	if (b->top == -1)
		return ;
	val = stack_pop(b);
	stack_add(a, val);
	write(1, "pa\n", 3);
}

void	pb(t_stack *a, t_stack *b)
{
	int	val;

	if (a->top == -1)
		return ;
	val = stack_pop(a);
	stack_add(b, val);
	write(1, "pb\n", 3);
}

void	ra(t_stack *a)
{
	int	first;
	int	i;

	if (a->top < 0)
		return ;
	first = a->array[a->top];
	i = a->top;
	while (i > 0)
	{
		a->array[i] = a->array[i - 1];
		i--;
	}
	a->array[0] = first;
	write(1, "ra\n", 3);
}
