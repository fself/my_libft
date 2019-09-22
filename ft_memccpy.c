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
	size_t			i;

	i = 0;
	dst = (unsigned char*)destination;
	src = (unsigned char*)source;
	while (i < num)
	{
		dst[i] = src[i];
		if (src[i] == (unsigned char)c)
		{
			return (destination + i + 1);
		}
		i++;
	}
	return (NULL);
}

// void		*ft_memccpy(void *dest, const void *src, int c, size_t size)
// {
// 	size_t			i;
// 	unsigned char	*source;
// 	unsigned char	*desti;

// 	i = 0;
// 	source = (unsigned char *)src;
// 	desti = (unsigned char *)dest;
// 	while (i < size)
// 	{
// 		desti[i] = source[i];
// 		if (source[i] == (unsigned char)c)
// 			return (dest + i + 1);
// 		i++;
// 	}
// 	return (NULL);
// }