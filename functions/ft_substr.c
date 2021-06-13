#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	char			*str;
	unsigned int	i;
	unsigned int	sub_size;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (start + len <= ft_strlen(s))
		sub_size = len;
	else
		sub_size = ft_strlen(s) - start;
	sub = ft_calloc(sub_size + 1, sizeof(char));
	str = (char *)s;
	i = 0;
	while (i < sub_size && str[start + i] != '\0')
	{
		sub[i] = str[start + i];
		i++;
	}
	return (sub);
}
