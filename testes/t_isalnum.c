#include<ctype.h>
#include<stdio.h>

int	ft_isalnum(int c);

int	main(void)
{
	for (int a = 35; a < 100; a++)
	{
		if (isalnum(a) != ft_isalnum(a))
		{
			printf("Erro em ft_isalnum");
			return 0;
		}
	}
	printf("ft_isalnum: OK\n");
	return 0;
}
