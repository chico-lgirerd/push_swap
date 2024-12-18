/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_checking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirerd <lgirerd@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 13:40:46 by lgirerd           #+#    #+#             */
/*   Updated: 2024/12/18 17:02:53 by lgirerd          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft/include/libft.h"
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}

int	is_valid_int(const char *str)
{
	int		i;
	int		sign;
	long	result;
	int		digit_count;

	i = 0;
	sign = 1;
	result = 0;
	digit_count = 0;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i++])
	{
		if (ft_isdigit(str[i - 1]) != 1)
			return (0);
		result = result * 10 + (str[i - 1] - '0');
		digit_count++;
		if (sign == 1 && result > INT_MAX)
			return (0);
		if (sign == -1 && result > (long)INT_MAX + 1)
			return (0);
	}
	return (digit_count > 0);
}

int	ft_duplicates(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (tab[i] == tab[j] && i != j)
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
		if (is_valid_int(argv[i]))
			tab[i - 1] = atoi(argv[i]);
		else
			return (free(tab), NULL);
		i++;
	}
	return (tab);
}

int	main(int argc, char **argv)
{
	int	*tab;
	int	i;

	i = 0;
	tab = ft_parse_int(argc, argv);
	if (tab == NULL || ft_duplicates(tab, argc - 1))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	while (i < argc - 1)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	free(tab);
	return (0);
}
