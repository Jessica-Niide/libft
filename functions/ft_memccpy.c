#include "libft.h"

void	*ft_memccpy(void *s2, const void *s1, int c, size_t n)
{
	unsigned char	*initial;
	unsigned char	*final;

	initial = (unsigned char *)s1;
	final = (unsigned char *)s2;
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
