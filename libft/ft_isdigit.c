#include "libft.h"

int		ft_isdigit(int c)
{
	return (c <= '9' && c >= '0');
}
/*int main()
{
  	char c, result;

     c = '7';
   	result = ft_isdigit(c);
     printf("%d\n", result);
     c = '1';
   	result = ft_isdigit(c);
     printf("%d\n", result);
     c = 'a';
   	result = ft_isdigit(c);
     printf("%d\n", result);
   	return 0;
}*/
