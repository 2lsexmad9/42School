#include "libft.h"

void ft_strdel(char **as)
{
	if (as && *as)
	{
		free(*as);
		*as = NULL;
	}
}

int main(void)
{
	int *p;
	char *c;

	c = "hello";
	p = &c;
	printf("%p", p);
	ft_strdel(p);
	return (0);
}
