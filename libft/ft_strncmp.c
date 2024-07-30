/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adal-bos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 06:05:02 by adal-bos          #+#    #+#             */
/*   Updated: 2024/07/30 06:05:07 by adal-bos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 && *s2 && *s1 == *s2 && n > 0)
	{
		s1++;
		s2++;
		n--;
	}
	if (n > 0)
		return (*(unsigned char *)s1 - *(unsigned char *)s2);
	else
		return (0);
}
/*int main ()
{
    char str1[15] = "ABCdef";
    char str2[15] = "ABCDEF";
    int result;

    result = ft_strncmp(str1, str2, 6);
    if(result < 0)
    {
       printf("str1 es menor a str2\n");
    }
    else if(result > 0)
    {
       printf("str2 tiene evidentes carencias repecto a str1\n");
    }
    else
    {
       printf("str1 igual a str2\n");
    }
    printf("No es mucho, pero es todo lo que tengo: %d\n", result);
    return(0);
}*/
