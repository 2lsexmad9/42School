/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adal-bos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 11:52:16 by adal-bos          #+#    #+#             */
/*   Updated: 2024/07/11 13:42:04 by adal-bos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;
	size_t	i;

	d = (char *)dst;
	s = (char *)src;
	i = 0;
	if (d == s)
		return (d);
	if (s < d)
	{
		i = len;
		while (i--)
			((char *)d)[i] = ((char *)s)[i];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			((char *)d)[i] = ((char *)s)[i];
			i++;
		}
	}
	return (d);
}
/*void * memmove(void *s1, const void *s2, size_t n)
{
	return memcpy(s1, s2, n);
}

int main()
{
	char dst[100] = "Libc is";
	char src[100] = "the standard library.";
	ft_memmove(dst, src, 5);
	printf("destination es(): %s\n", dst);
	return 0;
}*/
