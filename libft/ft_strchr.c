#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (!*s++)
			return (0);
	}
	return (char *)s;
}

/*int main ()
{
    const char str[] = "http://www.tutorialspoint.com";
    const char ch = 'f';
    char *result;

    result = ft_strchr(str, ch);
    printf("String after a character is %s\n", result);
    return(0);
}*/
