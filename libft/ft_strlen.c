/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adal-bos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 06:02:11 by adal-bos          #+#    #+#             */
/*   Updated: 2024/07/30 06:03:50 by adal-bos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
/*int main()
{
 	char str[] = "Mi barba tiene 3 pelos";
 	int result = ft_strlen(str);
 	printf("La string es asi de larga, y la gorda, te la comes %d.\n", result);
 	return 0;
}*/
