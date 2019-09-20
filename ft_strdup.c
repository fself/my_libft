/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fself <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 15:11:40 by fself             #+#    #+#             */
/*   Updated: 2019/09/20 20:03:07 by fself            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new_s;
	size_t	len;

	len = ft_strlen(s);
	new_s = (char*)malloc(sizeof(char) * (len + 1));
	new_s[len] = '\0';
	while (len--)
	{
		new_s[len] = s[len];
	}
	return (new_s);
}
