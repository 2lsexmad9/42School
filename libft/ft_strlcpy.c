/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adal-bos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 12:21:43 by adal-bos          #+#    #+#             */
/*   Updated: 2024/07/15 04:28:21 by adal-bos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	if (!dest && !src)
	{
		return (0);
	}
	if (!size)
	{
		return (ft_strlen(src));
	}
	i = 0;
	while (i < (size - 1) && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (ft_strlen(src));
}
/*#include <stdio.h>
int	main()
{
	const char *src = "Hola perra";
	char dest[20];
	size_t size = sizeof(dest);
	size_t length;

	length = ft_strlcpy(dest, src, size);

	printf("Origen: %s\n", src);
	printf("Destino : %s\n", dest);
	printf("Asin de grande la tengo(la string, golfa): %zu\n");

	return 0;
}*/
