#include<unistd.h>
void ft_putstr(char *str)
{
	unsigned int i;
	i = 0;

	while (str [i] != '\0')
	{
		i++;
	}
	write (1, str, i);
}
/*#include <stdio.h>
int main (void)
{
	ft_putstr("caca");
	printf("%C", ft_putstr);
	return (0);
}*/
