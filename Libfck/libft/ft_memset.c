/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adal-bos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 11:58:06 by adal-bos          #+#    #+#             */
/*   Updated: 2024/07/11 11:58:20 by adal-bos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*p;

	p = (char *)b;
	while (len > 0)
	{
		*p = c;
		p++;
		len--;
	}
	return (b);
}
/*int main(void)
{
	char str[50];
	strcpy(str, "This is string.h library function");
	puts(str);
	ft_memset(str, '8', 5);
	puts(str);
	return (0);
}*/
