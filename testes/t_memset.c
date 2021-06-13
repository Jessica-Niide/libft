#include <stdio.h>
#include <string.h>

/*void *ft_memset(void *b, int c, size_t len)
{
	size_t i;
	char *aux;
	//unsigned char aux2;
	i = 0;
	aux = (char *)b;
//	aux2 = (unsigned char)c;
	while (i < len)
	{
		//b = aux2;
		*aux = (unsigned char)c;
		i++;
		aux++;
		//b++;
	}
//	b = aux2;
	printf("aux %s \n", aux);
//	printf("aux2 %d \n", aux2);
	printf("b %s \n", b);
	return (b);
}*/

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*aux;

	i = 0;
	aux = (char *)s;
	while (i < n)
	{
		*aux = (unsigned char)c;
		i++;
		aux++;
	}
	return (s);
}

// void	*ft_memset(void *s, int c, size_t n)
// {
// 	char	*str;

// 	str = (char *)s;
// 	while (n-- > 0)
// 		*(str++) = (c + '0');
// 	return (s);
// }

int main(void)
{
	char *b, *d;
	memset(b,90, 4);
	// printf("%s \n", b);
	// memset(b,48, 2);
	// printf("%s \n", b);
	// memset(b,51, 10);
	// printf("%s \n", b);
	ft_memset(d, 90, 4);
	// printf("ft = %s \n", d);
	return 0;
}
