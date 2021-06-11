#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;
	size_t			i;

	src = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*src == (unsigned char)c)
		{
			return ((void *)(src));
		}
		src++;
		i++;
	}
	return (NULL);
}
