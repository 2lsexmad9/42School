int ft_strcmp (char *s1, char *s2)
{
	unsigned int i;
	i = 1;

	while (s1[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
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
