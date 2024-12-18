/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirerd <lgirerd@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 12:47:41 by lgirerd           #+#    #+#             */
/*   Updated: 2024/12/18 13:06:33 by lgirerd          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"
#include <limits.h>

int	ft_isspace(char c)
{
	return (c == '\t' || c == '\n' || c == '\r'
		|| c == '\f' || c == '\v' || c == ' ');
}

long long	count_numbers(char *nptr)
{
	long long	n;
	int			i;

	i = 0;
	n = 0;
	while (ft_isdigit(nptr[i]))
	{
		if (n > LLONG_MAX / 10 || (n == LLONG_MAX / 10 && (nptr[i] - '0') > LLONG_MAX % 10))
			return (LLONG_MAX);
		n = (n * 10) + nptr[i] - '0';
		i++;
	}
	return (n);
}

long long	ft_atoll(const char *nptr)
{
	long long	num;
	int			i;
	int			minus;
	int			sign;
	
	sign = 0;
	minus = 0;
	i = 0;
	while (ft_isspace(nptr[i]))
		i++;
	while (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			minus++;
		else
			sign++;
		i++;
	}
	if (ft_isdigit(nptr[i]) && (minus + sign) < 2)
	{
		if (minus == 1)
		{
			num = count_numbers(nptr + i);
			if (num > (unsigned long long)LLONG_MAX + 1)
				return (LLONG_MIN);
		
		}
		
	}
}
