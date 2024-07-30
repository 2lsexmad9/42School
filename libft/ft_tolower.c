/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adal-bos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 06:09:11 by adal-bos          #+#    #+#             */
/*   Updated: 2024/07/30 06:09:12 by adal-bos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
/*int main()
{
 	char c, result;
     c = 'M';
 	result = ft_tolower(c);
     printf("The result is %c\n", result);
     c = 'g';
 	result = ft_tolower(c);
     printf("The result is %c\n", result);
     c = '+';
 	result = ft_tolower(c);
     printf("The result is %c\n", result);
 	return 0;
}*/
