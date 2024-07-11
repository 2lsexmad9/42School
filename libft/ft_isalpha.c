#include "libft.h"

int		ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 & c <= 122))
		return (1);
	else
		return (0);
}

/*int main()
{
	char c, result;

     c = '*';
  	result = ft_isalpha(c);
     printf("%d\n", result);

     c = 'g';
  	result = ft_isalpha(c);
     printf("%d\n", result);

     c = '+';
  	result = ft_isalpha(c);
     printf("%d\n", result);

  	return 0;
}*/
