#include "libft.h"

void ft_strclr(char *s)
{
    while (*s)
    {
        *(s++) = '\0';
    }
}

int main(void)
{
    char str[] = {'h', 'e', 'l', 'l', 'o'};

    ft_strclr(str);
    return (0);
}
