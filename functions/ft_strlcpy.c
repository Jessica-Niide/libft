#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char	*initial;
	char	*final;
	size_t	i;

	initial = (char *)src;
	final = (char *)dst;
	i = 0;
	if (dstsize > 0)
	{
		while ((i < dstsize - 1) && initial[i] != '\0')
		{
			final[i] = initial[i];
			i++;
		}
		final[i] = '\0';
	}
	return (ft_strlen(src));
}
