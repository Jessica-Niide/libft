#include<ctype.h>
#include<stdio.h>

int	ft_isalpha(char c);

int	main(void)
{
	for (int a = 47; a < 98; a++)
	{
		if (isalpha(a) != ft_isalpha(a))
		{
			printf("Erro em ft_isalpha");
			return 0;
		}
	}
	printf("ft_isalpha: OK\n");
	return 0;
}
