/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adal-bos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 05:50:14 by adal-bos          #+#    #+#             */
/*   Updated: 2024/07/30 05:50:19 by adal-bos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*a1;
	unsigned char	*a2;
	size_t			i;

	a1 = (unsigned char *)s1;
	a2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (a1[i] != a2[i])
			return (a1[i] - a2[i]);
		i++;
	}
	return (0);
}
/*int main ()
{
    char str1[15] = "abcdef";
    char str2[15] = "ABCDEF";
    int result;

    result = memcmp(str1, str2, 5);
    if(result > 0) {
       printf("str2 es menor que str1");
    } else if(result < 0) {
       printf("str1 es menor que str2");
    } else {
       printf("str1 es igual a str2");
    }
    return(0);
}*/
