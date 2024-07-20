/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adal-bos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 03:38:23 by adal-bos          #+#    #+#             */
/*   Updated: 2024/07/19 03:38:47 by adal-bos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}
/*void funca(unsigned int i, char *str)
{
 	printf("index = %d and the string is %s\n", i, str);
}
int	main()
{
 	char str[10] = "Hello.";
 	printf("resultado %s\n", str);
 	ft_striteri(str, funca);
 	printf("resultado2 %s\n", str);
 	return 0;
}*/
