/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_checking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirerd <lgirerd@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 13:40:46 by lgirerd           #+#    #+#             */
/*   Updated: 2024/12/17 17:49:18 by lgirerd          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/include/libft.h"

int	ft_duplicates(int *tab)
{
	int	i;
	int	j;

	i = 0;
	while (tab[i] != '\0')
	{
		j = 0;
		while (tab[j] != '\0')
		{
			if (tab[i] == tab[j] && (i != j))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	*ft_parse_int(int argc, char **argv, int *size)
{
	int	i;
	
	if (argc <= 1)
	{
		*size = 0;
		return (NULL);
	}
	i = 1;
	while (argv[i])
	{
		
	}
}
