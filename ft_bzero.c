/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fself <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 15:32:54 by fself             #+#    #+#             */
/*   Updated: 2019/09/18 15:34:59 by fself            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *ptr, size_t num)
{
	unsigned char *buf;

	buf = (unsigned char*)ptr;
	while (num-- > 0)
	{
		buf[num] = '\0';
	}
}
