#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*ptr;
	char	*str;
	size_t	i;
	size_t	j;

	ptr = (char *)haystack;
	str = (char *)needle;
	i = 0;
	if (ft_strlen(str) == 0)
		return (ptr);
	while (ptr[i] != '\0' && (i < len))
	{
		j = 0;
		while ((ptr[i + j] == str[j]) && (i + j < len))
		{
			j++;
			if (str[j] == '\0')
				return (&ptr[i]);
		}
		i++;
	}
	return (NULL);
}
