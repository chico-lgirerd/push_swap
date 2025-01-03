/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_minimals.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirerd <lgirerd@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 13:59:01 by lgirerd           #+#    #+#             */
/*   Updated: 2025/01/03 14:18:15 by lgirerd          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_stack *a, t_stack *b)
{
	int	a;
	int	b;

	a = a->array[0];
	b = a->array[1];

	if (a > b)
		sa(a);
}

void	sort_three(t_stack *a, t_stack *b)
{
	int	a;
	int	b;
	int	c;

	a = a->array[0];
	b = a->array[1];
	c = a->array[2];

	if (a > b && a > c && b < c)
		ra(a);
	else if (a > b && b > c)
	{
		ra(a);
		sa(a);
	}
	
}
