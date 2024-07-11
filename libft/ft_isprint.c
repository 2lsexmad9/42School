#include "libft.h"

int		ft_isprint(int c)
{
	return (c > 31 && c < 127);
}
/*int main()
{
	char c, result;
	
	c = 'f';
	result = ft_isprint(c);
	printf("%d\n", result);
	c = 'g';
	result = ft_isprint(c);
	printf("%d\n", result);
	c = '+';
	result = ft_isprint(c);
	printf("%d\n", result);
	return 0;
}*/
