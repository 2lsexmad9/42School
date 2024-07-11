#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}


/*int main()
{
 	char c, result;

     c = '*';
  	result = ft_isalnum(c);
     printf("%d\n", result);

     c = 'g';
  	result = ft_isalnum(c);
     printf("%d\n", result);

     c = '+';
  	result = ft_isalnum(c);
     printf("%d\n", result);

  	return 0;
}*/
