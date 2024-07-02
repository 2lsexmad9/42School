//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;
	swap = *a;
	*a = *b;
	*b = swap;
}
/*int main (void)
{
	int	a;
	int	b;
	int	*ptra;
	int	*ptrb;

	a = 1;
	b = 5;

	ptra = &a;
	ptrb = &b;

	ft_swap(ptra, ptrb);
	printf("a : %d, b : %d\n", a, b);
}*/
