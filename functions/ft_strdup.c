#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(s1);
	ptr = (char *)ft_calloc((len + 1), sizeof(char));
	if (ptr != NULL)
	{
		while (i < len)
		{
			ptr[i] = s1[i];
			i++;
		}
	}
	return (ptr);
}
