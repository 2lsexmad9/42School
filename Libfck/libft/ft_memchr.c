/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adal-bos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 11:44:10 by adal-bos          #+#    #+#             */
/*   Updated: 2024/07/11 11:44:18 by adal-bos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*sc;
	size_t		i;

	sc = (const char *)s;
	i = -1;
	while (++i < n)
		if (*(sc + i) == (char)c)
			return ((void *)sc + i);
	return (NULL);
}
/*int main ()
{
    const char str[] = "http://www.tutorialspoint.com";
    const char ch = '.';
    char *result;

    result = memchr(str, ch, 11);

    printf("String after character is %s\n", result);

    return(0);
}*/
