#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*initial;
	char	*final;
	size_t	i;

	initial = (char *)src;
	final = (char *)dst;
	i = 0;
	while (i < n)
	{
		final[i] = initial[i];
		i++;
	}
	return (dst);
}
