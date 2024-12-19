/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_reverse.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirerd <lgirerd@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 17:05:47 by lgirerd           #+#    #+#             */
/*   Updated: 2024/12/19 18:20:13 by lgirerd          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

void	rra(t_stack *a)
{
	if (a->top < 0)
		return ;
	rotate_down(a);
	write(1, "rra\n", 4);
}

void	rrb(t_stack *b)
{
	if (b->top < 0)
		return ;
	rotate_down(b);
	write(1, "rrb\n", 4);
}

void	rrr(t_stack *a, t_stack *b)
{
	if (a->top < 0 || b->top < 0)
		return ;
	rotate_down(a);
	rotate_down(b);
	write(1, "rrr\n", 4);
}
