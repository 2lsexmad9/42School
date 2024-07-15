/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adal-bos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 11:30:20 by adal-bos          #+#    #+#             */
/*   Updated: 2024/07/11 11:40:02 by adal-bos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c > 31 && c < 127);
}
/*int main()
{
	char c, result;
	
	c = 'f';
	result = ft_isprint(c);
	printf("%d\n", result);
	c = 'g';
	result = ft_isprint(c);
	printf("%d\n", result);
	c = '+';
	result = ft_isprint(c);
	printf("%d\n", result);
	return 0;
}*/
