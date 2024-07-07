#include<unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_putstr(char *str)
{
	unsigned int i;
	i = 0;

	while (str [i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
/*int main (void)
{
	char str[] = "asdfg 12345";
	ft_putstr(str);
	ft_putchar('\n');
	write(1, "-----\n", 6);
	char str1[] = "";
	ft_putstr(str1);
	ft_putchar('\n');
	write(1, "-----\n", 6);
	return (0);
}*/
