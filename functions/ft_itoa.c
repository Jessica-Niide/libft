#include "libft.h"

static unsigned int	int_size(int n)
{
	unsigned int	size;

	size = 0;
	if (n < 10)
		size++;
	else
	{
		size = 1 + int_size(n / 10);
	}
	return (size);
}

static unsigned int	ft_power(int nb, int power)
{
	unsigned int	value;

	if (power == 0)
	{
		value = 1;
	}
	else if (power == 1)
	{
		value = nb;
	}
	else
	{
		value = nb * ft_power(nb, power - 1);
	}
	return (value);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	len;
	unsigned int	i;

	i = 0;
	if (n == -2147483648LL || n == -2147483648)
		str = ft_strdup("-2147483648");
	else if (n >= 0)
	{
		len = int_size(n);
		str = ft_calloc(len + 1, sizeof(char));
		while (i < len)
		{
			str[i] = (n / ft_power(10, len - 1 - i)) + '0';
			n = n - (n / ft_power(10, len - 1 - i)) * ft_power(10, len - 1 - i);
			i++;
		}
	}
	else if (n < 0)
		str = ft_strjoin(ft_strdup("-"), ft_itoa(-1 * n));
	else
		return (NULL);
	return (str);
}
