/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adal-bos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 05:48:49 by adal-bos          #+#    #+#             */
/*   Updated: 2024/07/30 05:49:45 by adal-bos         ###   ########.fr       */
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
    const char str[] = "No hay pajaporte que te salve, pajero";
    const char ch = '.';
    char *result;

    result = memchr(str, ch, 11);

    printf("Esto es la string bien manipulada %s\n", result);

    return(0);
}*/
