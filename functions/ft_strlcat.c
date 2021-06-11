#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char	*str;
	char	*dest;
	size_t	len_str;
	size_t	len_dest;
	size_t	i;

	str = (char *)src;
	dest = (char *)dst;
	len_str = ft_strlen(src);
	i = 0;
	len_dest = ft_strlen(dst);
	if (len_dest < dstsize)
	{
		while ((i < dstsize - len_dest - 1) && str[i] != '\0')
		{
			dest[i + len_dest] = str[i];
			i++;
		}
		dest[i + len_dest] = '\0';
		return (len_str + len_dest);
	}
	return (dstsize + len_str);
}
