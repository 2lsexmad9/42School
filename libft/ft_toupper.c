/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adal-bos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 06:09:37 by adal-bos          #+#    #+#             */
/*   Updated: 2024/07/30 06:09:56 by adal-bos         ###   ########.fr       */
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
