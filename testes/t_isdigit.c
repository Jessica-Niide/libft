#include<ctype.h>
#include<stdio.h>

int	ft_isdigit(char c);

int	main(void)
{
	for (int a = 35; a < 60; a++)
	{
		if (isdigit(a) != ft_isdigit(a))
		{
			printf("Erro em ft_isdigit");
			return 0;
		}
	}
	printf("ft_isdigit: OK\n");
	return 0;
}
