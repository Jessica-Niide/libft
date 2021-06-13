#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*initial;
	char	*final;
	size_t	i;

	initial = (char *)src;
	final = (char *)dst;
	i = 0;
	if (initial > final)
	{
		while (i < n)
		{
			final[i] = initial[i];
			i++;
		}
	}
	else
	{
		while (i++ < n)
			final[n - i] = initial[n - i];
	}
	return (dst);
}
