/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adal-bos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 11:29:57 by adal-bos          #+#    #+#             */
/*   Updated: 2024/07/11 11:39:49 by adal-bos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c <= '9' && c >= '0');
}
/*int main()
{
  	char c, result;

     c = '7';
   	result = ft_isdigit(c);
     printf("%d\n", result);
     c = '1';
   	result = ft_isdigit(c);
     printf("%d\n", result);
     c = 'a';
   	result = ft_isdigit(c);
     printf("%d\n", result);
   	return 0;
}*/
