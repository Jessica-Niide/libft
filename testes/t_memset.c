#include <stdio.h>
#include <string.h>

void *ft_memset(void *b, int c, size_t len)
{
	size_t i;
	char aux[len];
	char *aux2;
	i = 0;
	aux2 = "teste";
	b = aux;
	while (i < len)
	{
		aux[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

int main(void)
{
	char *b, *d;
	memset(b,90, 4);
	printf("%s \n", b);
	ft_memset(d,90, 4);
	printf("%s \n", d);
	return 0;
}
