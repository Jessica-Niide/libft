#include "libft.h"

static int	get_starting_index(const char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] == 32 || (str[index] > 8 && str[index] < 14))
			index++;
		else
			return (index);
	}
	return (index);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	value;

	i = get_starting_index(str);
	sign = 1;
	value = 0;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] != '\0')
	{
		if ((str[i] < '0' || str[i] > '9'))
			return (sign * value);
		else
		{
			value = value * 10 + (str[i] - '0');
			i++;
		}
	}
	return (sign * value);
}
