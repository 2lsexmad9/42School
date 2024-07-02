int ft_iterative_factorial(int nb)
{
	int x;

	x = 1;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (x);
	while (nb > 0)
	{
		x *= nb;
		nb--;
	}
	return (x);
}
/*#include <stdio.h>
int main (void)
{
	printf("%d", ft_iterative_factorial(10));
	return (0);
}*/
