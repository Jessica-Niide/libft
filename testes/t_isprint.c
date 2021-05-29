#include<ctype.h>
#include<stdio.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return 1;
	return 0;
}

int	main(void)
{
	for (int a = -10; a < 200; a++)
	{
		if (isprint(a) != ft_isprint(a))
		{
			printf("Erro em ft_isprint");
			return 0;
		}
	}
	printf("ft_isprint: OK\n");
	return 0;
}
