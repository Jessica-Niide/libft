#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i_s1;
	size_t	i_s2;

	i_s1 = 0;
	i_s2 = 0;
	str = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (*s1)
	{
		str[i_s1] = *s1;
		s1++;
		i_s1++;
	}
	while (*s2)
	{
		str[i_s1 + i_s2] = *s2;
		s2++;
		i_s2++;
	}
	str[i_s1 + i_s2] = '\0';
	return (str);
}
