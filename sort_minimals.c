/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_minimals.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirerd <lgirerd@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 13:59:01 by lgirerd           #+#    #+#             */
/*   Updated: 2025/01/03 15:25:57 by lgirerd          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_stack *a)
{
	int	val_a;
	int	val_b;

	val_a = a->array[1];
	val_b = a->array[0];

	if (val_a > val_b)
		sa(a);
}

void	sort_three(t_stack *a)
{
	int	val_a;
	int	val_b;
	int	val_c;
	
	val_a = a->array[2];
	val_b = a->array[1];
	val_c = a->array[0];

	if (val_a > val_b && val_a > val_c && val_b < val_c)
		ra(a);
	else if (val_a > val_b && val_b > val_c)
	{
		ra(a);
		sa(a);
	}
	else if (val_a < val_b && val_a < val_c && val_c < val_b)
	{
		rra(a);
		sa(a);
	}
	else if (val_b > val_a && val_b < val_c && val_a < val_c)
		sa(a);
}
