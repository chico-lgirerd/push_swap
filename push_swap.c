/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirerd <lgirerd@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 14:27:56 by lgirerd           #+#    #+#             */
/*   Updated: 2024/12/19 16:28:17 by lgirerd          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

int	main(int argc, char **argv)
{
	int		*tab;
	int		i;

	if (argc < 2)
		return (0);
	tab = ft_parse_int(argc, argv);
	if (!tab || ft_duplicates(tab, argc - 1))
	{
		write(1, "Error\n", 6);
		return (1);
	}
}
