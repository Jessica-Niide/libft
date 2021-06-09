#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*aux;

	i = 0;
	aux = (char *)b;
	while (i < len)
	{
		*aux = (unsigned char)c;
		i++;
		aux++;
	}
	return (b);
}
