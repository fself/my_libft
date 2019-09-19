#include "libft.h"

void    *ft_memmove(void *destination, const void *source, size_t n)
{
    char	*dst;
	char	*src;
	size_t	i;

	if (destination == source)
		return (destination);
	src = (char*)source;
	dst = (char*)destination;
	if (source < destination)
	{
		i = n;
		while (i-- > 0)
        {
			dst[i] = src[i];
        }
	}
	else
	{
		i = 0;
		while (i < n)
		{
			dst[i] = src[i];
			i++;
		}
	}
	return (destination);
}