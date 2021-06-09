#include "libft.h"

void	*ft_bzero(void *b, size_t len)
{
	size_t	i;
	char	*aux;

	if (len != 0)
	{
		i = 0;
		aux = (char *)b;
		while (i < len)
		{
			*aux = '\0';
			i++;
			aux++;
		}
	}
	return (b);
}
