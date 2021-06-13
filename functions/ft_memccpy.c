#include "libft.h"

void	*ft_memccpy(void *d, const void *s, int c, size_t n)
{
	unsigned char	*initial;
	unsigned char	*final;

	initial = (unsigned char *)s;
	final = (unsigned char *)d;
	while (n > 0)
	{
		*final = *initial;
		if (*initial == (unsigned char)c)
		{
			final++;
			return (final);
		}
		final++;
		initial++;
		n--;
	}
	return (NULL);
}
