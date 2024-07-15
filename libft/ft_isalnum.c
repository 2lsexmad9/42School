/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adal-bos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 11:27:45 by adal-bos          #+#    #+#             */
/*   Updated: 2024/07/11 11:27:53 by adal-bos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}
/*int main()
{
 	char c, result;

     c = '*';
  	result = ft_isalnum(c);
     printf("%d\n", result);

     c = 'g';
  	result = ft_isalnum(c);
     printf("%d\n", result);

     c = '+';
  	result = ft_isalnum(c);
     printf("%d\n", result);

  	return 0;
}*/
