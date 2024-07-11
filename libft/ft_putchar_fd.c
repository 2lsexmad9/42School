#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*int main ()
{
     char letter = 'A';
     ft_putchar_fd(letter, 2);
     return(0);
}*/
