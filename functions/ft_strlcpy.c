#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char	*source;
	char	*where_to;
	size_t	index;

	source = (char *)src;
	where_to = (char *)dst;
	index = 0;
	if (dstsize > 0)
	{
		while ((index < dstsize - 1) && source[index] != '\0')
		{
			where_to[index] = source[index];
			index++;
		}
		where_to[index] = '\0';
	}
	return (ft_strlen(src));
}
