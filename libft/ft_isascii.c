#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*int main()
{
        char c, result;

     c = '?';
        result = ft_isascii(c);
     printf("%d\n", result);
     c = '0';
        result = ft_isascii(c);
     printf("%d\n", result);
     c = 'X';
        result = ft_isascii(c);
     printf("%d\n", result);
        return 0;
}*/
