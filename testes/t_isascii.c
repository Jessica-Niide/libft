#include<ctype.h>
#include<stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return 1;
	return 0;
}

int	main(void)
{
	for (int a = -2; a < 130; a++)
	{
		if (isascii(a) != ft_isascii(a))
		{
			printf("Erro em ft_isascii");
			return 0;
		}
	}
	// int a = isascii(-3);
	// int b = ft_isascii(-3);
	// printf("%i \n", a);
	// printf("%i \n", b);
	printf("ft_isascii: OK\n");
	return 0;
}
