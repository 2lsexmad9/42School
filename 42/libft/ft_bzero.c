#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
  unsigned char *str;

  str = (unsigned char*)s;
  while (n--)
      *str++ = '\0';
}
/*int main() {
  const char a[] = "hola";
  ft_bzero(a,2);
}
  //a = /0/0la/0
*/
