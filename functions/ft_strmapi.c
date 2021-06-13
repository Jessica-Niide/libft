#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			size;
	char			*str;
	char			*src;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	size = ft_strlen(s);
	str = ft_calloc(size + 1, sizeof(char));
	src = (char *)s;
	if (str)
	{
		i = 0;
		while (i < size)
		{
			str[i] = f(i, src[i]);
			i++;
		}
	}
	return (str);
}
