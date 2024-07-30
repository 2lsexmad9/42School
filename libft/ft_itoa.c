/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adal-bos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 05:46:32 by adal-bos          #+#    #+#             */
/*   Updated: 2024/07/30 05:48:18 by adal-bos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_itoa_size(int n)
{
	int	size;

	size = 0;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		n = -n;
		size++;
	}
	if (n == 0)
		return (1);
	while (n > 9)
	{
		n = n / 10;
		size++;
	}
	size++;
	return (size);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			size;
	long long	nb;

	nb = n;
	size = ft_itoa_size(n);
	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	str[size] = '\0';
	if (nb == 0)
		str[0] = '0';
	if (nb < 0)
	{
		nb = -nb;
		str[0] = '-';
	}
	size--;
	while (nb)
	{
		str[size] = (nb % 10) + '0';
		size--;
		nb = nb / 10;
	}
	return (str);
}
/*#include <stdio.h>
int main()
{
     int x = 456789;
     char *ptr;
     char *i1 = ft_itoa(-623);
     char *i2 = ft_itoa(156);
 	char *i3 = ft_itoa(-0);
      ptr = ft_itoa(x);

      printf("cojo otro muelle: %s\n", ptr);

     printf("cojo otro muelle: %s\n", i1);
     if (strcmp(i1, "-623"))
 	{
 		printf("asin no");;
 	}
     printf("cojo otro muelle: %s\n", i2);
 	if (strcmp(i2, "156"))
 	{
 		printf("toooontooo, del to");
 	}
     printf("cojo otro muelle: %s\n", i3);
 	if (strcmp("0", i3))
 	{
 		printf("F, bro");
 	}
     return (0);
}*/
