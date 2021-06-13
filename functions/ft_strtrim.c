#include "libft.h"

static int	is_in_set(char c, char *set)
{
	size_t	set_index;

	set_index = 0;
	while (set_index < ft_strlen(set))
	{
		if (c == set[set_index])
			return (1);
		set_index++;
	}
	return (0);
}

static int	find_starting_index(char *str, char *del)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (!is_in_set(str[index], del))
			return (index);
		index++;
	}
	return (index);
}

static int	find_last_index(char *str, char *del)
{
	int	index;

	index = ft_strlen(str) - 1;
	while (index > 0)
	{
		if (!is_in_set(str[index], del))
			return (index);
		index--;
	}
	return (index);
}

static char	*make_a_copy(char *copy, char *src, int start, int end)
{
	int	index;

	index = 0;
	while (index <= (end - start))
	{
		copy[index] = src[start + index];
		index++;
	}
	return (copy);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	int		start;
	int		end;
	char	*str;
	char	*del;

	if (!s1)
		return (NULL);
	str = (char *)s1;
	del = (char *)set;
	start = find_starting_index(str, del);
	end = find_last_index(str, del);
	if (start > end)
		trimmed = ft_calloc(1, sizeof(char));
	else
	{
		trimmed = ft_calloc((end - start + 2), sizeof(char));
		make_a_copy(trimmed, str, start, end);
	}
	return (trimmed);
}
