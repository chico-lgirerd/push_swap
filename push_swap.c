/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirerd <lgirerd@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 14:27:56 by lgirerd           #+#    #+#             */
/*   Updated: 2025/01/03 15:24:44 by lgirerd          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int		*tab;
	int		i;
	t_stack	a;
	t_stack	b;

	if (argc < 2)
		return (0);
	tab = ft_parse_int(argc, argv);
	if (!tab || ft_duplicates(tab, argc - 1))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	stack_init(&a);
    stack_init(&b);
    i = argc - 2;
    while (i >= 0)
        stack_add(&a, tab[i--]);
    free(tab);
	if (is_sorted(&a) == 0)
    	sort_three(&a);
    return (0);
}
