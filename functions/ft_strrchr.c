#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		i;
	int		len;

	str = (char *)s;
	i = 0;
	len = ft_strlen(str);
	while (i < len)
	{
		str++;
		i++;
	}
	while (i > 0)
	{
		if (*str == (unsigned char)c)
			return (str);
		str--;
		i--;
	}
	if (*str == (unsigned char)c)
		return (str);
	return (NULL);
}
