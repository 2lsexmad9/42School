/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adal-bos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 12:18:14 by adal-bos          #+#    #+#             */
/*   Updated: 2024/07/11 12:19:06 by adal-bos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}
/*void my_func(unsigned int i, char *str)
{
 	printf("index = %d and the string is %s\n", i, str);
}
int	main()
{
 	char str[10] = "Hello.";
 	printf("resultado %s\n", str);
 	ft_striteri(str, my_func);
 	printf("resultado2 %s\n", str);
 	return 0;
}*/
