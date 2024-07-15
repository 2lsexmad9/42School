/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adal-bos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 12:31:47 by adal-bos          #+#    #+#             */
/*   Updated: 2024/07/11 12:32:35 by adal-bos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
/*int main()
{
	char c, result;

      c = 'M';
  	result = ft_toupper(c);
      printf("%c\n", result);
      c = 'g';
 	result = ft_toupper(c);
      printf("%c\n", result);
      c = '+';
  	result = ft_toupper(c);
      printf("%c\n", result);

  	return 0;
}*/
