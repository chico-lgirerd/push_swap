/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_checking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirerd <lgirerd@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 13:40:46 by lgirerd           #+#    #+#             */
/*   Updated: 2024/12/18 00:22:09 by lgirerd          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft/include/libft.h"
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

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

int	*ft_parse_int(int argc, char **argv)
{
	int	i;
	int	*tab;

	if (argc <= 1)
		return (NULL);
	tab = malloc((argc - 1) * sizeof(int));
	if (tab == NULL)
		return (NULL);
	i = 1;
	while (i < argc)
	{
		if ((atoi(argv[i]) >= INT_MIN && atoi(argv[i]) <= INT_MAX))
			tab[i - 1] = atoi(argv[i]);
		else
			return (free(tab), NULL);
		i++;
	}
	return (tab);
}

int	main(int argc, char **argv)
{
	int *tab;

	tab = ft_parse_int(argc, argv);
	if (tab == NULL)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	int i = 0;
	while (tab[i])
	{
		printf("%d\n", tab[i]);
		i++;
	}
	free(tab);
	return (0);
}

// int	main(void)
// {
// 	printf("%d\n", atoi("aua"));
// 	return (0);
// }