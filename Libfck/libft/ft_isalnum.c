/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adal-bos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 03:32:32 by adal-bos          #+#    #+#             */
/*   Updated: 2024/07/19 03:32:59 by adal-bos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
/*#include <stdio.h>
int main()
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
