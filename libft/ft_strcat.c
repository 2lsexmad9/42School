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

	ft_strcpy(src, "Nadie en su lecho de muerte");
	ft_strcpy(dest, "se arrepiente de la cantidad de sexo que ha tenido");

	ft_strcpy(src, dest);
	printf("%s\n%s\n", src, dest);
	ft_strcat(dest, src);

	printf("Leccion del dia: |%s|", dest);
	return (0);
}*/
