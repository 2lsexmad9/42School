int ft_strcmp (char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
		s1++, s2++;
	return (*s1 - *s2);
}
/*#include <stdio.h>
#include <string.h>
int main(int argc, char **argv)
{
	if (argc == 3)
	{
	printf("Str 1 = %s\n", argv[1]);
	printf("Str 2 = %s\n", argv[2]);
	printf("La diferencia ft_strcmp: %i\n", ft_strcmp(argv[1], argv[2]));
	return(0);
	}
}*/
