int ft_strlen(char *str)
{
	unsigned int i;
	i = 0;
	while (str [i] != '\0')
	{
		i++;
	}
	return(i);
}
/*#include <stdio.h>
int main (void)
{
	char str[] = "Life is good";
	int result = ft_strlen(str);
	printf("%d", result);
		return (0);
}*/
