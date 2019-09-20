/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fself <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 15:10:53 by fself             #+#    #+#             */
/*   Updated: 2019/09/20 15:18:30 by fself            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *destination, const void *source, int c, size_t num)
{
	unsigned char *dst;
	unsigned char *src;

	if (num == 0 || destination == source)
		return (destination);
	dst = (unsigned char*)destination;
	src = (unsigned char*)source;
	while (num-- > 0)
	{
		dst[num] = src[num];
		if (src[num] == c)
			break ;
	}
	return (destination);
}
