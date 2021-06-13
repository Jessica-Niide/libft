#include "libft.h"

static int	get_next_index(char *str, int start, char c)
{
	int	next_start;

	next_start = start + 1;
	if (str[next_start] == c)
		next_start = get_next_index(str, next_start, c);
	else
	{
		while (str[next_start] != c && str[next_start] != '\0')
			next_start++;
	}
	return (next_start);
}

static char	*copy_str(char *where_to, char *str, size_t start, char c)
{
	size_t	index;

	if (str[start])
	{
		while (str[start] == c)
			start++;
	}
	index = start;
	if (str[index])
	{
		while (str[index] != c && str[index] != '\0')
			index++;
	}
	where_to = ft_calloc((index - start + 1), sizeof(char));
	index = 0;
	while (str[start] != c && str[start] != '\0')
	{
		where_to[index] = str[start];
		start++;
		index++;
	}
	return (where_to);
}

static int	how_many_splits(char *s, char c)
{
	int	this_many;
	int	index;

	if (!s || !c)
		return (0);
	index = 0;
	if (s[index] == c)
	{
		while (s[index] == c)
			index++;
	}
	this_many = 2;
	while (s[index] != '\0')
	{
		if (s[index] == c)
		{
			if (s[index + 1] != c && s[index + 1] != '\0')
				this_many++;
		}
		index++;
	}
	return (this_many);
}

static int	will_split(char *s, char c)
{
	int	index;

	if (!s)
		return (0);
	else if (s[0] == '\0')
		return (0);
	else if (s[0] == c)
	{
		index = 0;
		while (s[index] != '\0')
		{
			if (s[index + 1] != c && s[index + 1] != '\0')
				return (1);
			index++;
		}
		return (0);
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	int		array_size;
	int		i_array;
	size_t	index_c;
	char	**splits;
	char	*str;

	str = (char *)s;
	if (!(will_split(str, c)))
	{
		splits = malloc(1 * sizeof(char *));
		splits[0] = (NULL);
		return (splits);
	}
	array_size = how_many_splits(str, c);
	splits = malloc(array_size * sizeof(char *));
	i_array = 0;
	index_c = 0;
	while (i_array < array_size && index_c < ft_strlen(str))
	{
		splits[i_array] = copy_str(splits[i_array], str, index_c, c);
		index_c = get_next_index(str, index_c, c);
		i_array++;
	}
	splits[array_size - 1] = (NULL);
	return (splits);
}
