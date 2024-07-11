#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

/*int main()
{
 		char c, result;

      c = 'M';
  	result = ft_toupper(c);
      printf("The result is %c\n", result);

      c = 'g';
 	result = ft_toupper(c);
      printf("The result is %c\n", result);

      c = '+';
  	result = ft_toupper(c);
      printf("The result is %c\n", result);

  	return 0;
}*/
