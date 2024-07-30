/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adal-bos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 12:13:50 by adal-bos          #+#    #+#             */
/*   Updated: 2024/07/11 12:15:33 by adal-bos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
/*int	main(void)
{
	char	src[50];
	char	dest[50];

	strcpy(src, "Aqui mi fusil, aqui mi pistola");
	strcpy(dest, "una da tiros, la otra consuela");

	//ft_strcpy(str1, str2);
	printf("%s\n%s", src, dest);
	return (0);
}*/
