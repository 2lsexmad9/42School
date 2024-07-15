/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adal-bos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 12:09:00 by adal-bos          #+#    #+#             */
/*   Updated: 2024/07/11 12:09:54 by adal-bos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)

{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int main(void)
{*
	char src[50], dest[50];

	ft_strcpy(src, "This is source");
	ft_strcpy(dest, "This is destination");

	ft_strcpy(src, dest);
	printf("%s\n%s\n", src, dest);
	ft_strcat(dest, src);

	printf("Final destination string : |%s|", dest);
	return (0);
}*/
