#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *)dst;
	s = (char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
/*int main()
{
 	char dst[100] = "Libc is";
 	char src[100] = "the standard library.";

 	ft_memcpy(dst, src, sizeof(src));
	printf("dst after memset(): %s\n", dst);
 	return 0;
}*/
