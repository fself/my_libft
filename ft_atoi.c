/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fself <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 16:46:16 by fself             #+#    #+#             */
/*   Updated: 2019/09/20 16:53:30 by fself            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	long	sign;
	long	nbr;
	int res;

	sign = 1;
	while (*str == ' ' || *str == '\f' || *str == '\n' || *str == '\r' ||
			*str == '\t' || *str == '\v')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	nbr = 0;
	while (ft_isdigit((int)*str))
	{
		nbr = nbr * 10 + *str - '0';
		str++;
	}
	res = (sign * nbr);
	return (res);
}
