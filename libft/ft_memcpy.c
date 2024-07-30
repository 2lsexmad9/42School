/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adal-bos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 11:48:32 by adal-bos          #+#    #+#             */
/*   Updated: 2024/07/11 11:48:40 by adal-bos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
 	char dst[100] = "Nadie llora en la lloreria";
 	char src[100] = "y nadie se hace pajas en la pajareria.";

 	ft_memcpy(dst, src, sizeof(src));
	printf("dst despues de sufrirme como dev(): %s\n", dst);
 	return 0;
}*/
