/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adal-bos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 05:44:56 by adal-bos          #+#    #+#             */
/*   Updated: 2024/07/30 05:44:59 by adal-bos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*int main()
{
        char c, result;

     c = '?';
        result = ft_isascii(c);
     printf("%d\n", result);
     c = '0';
        result = ft_isascii(c);
     printf("%d\n", result);
     c = 'X';
        result = ft_isascii(c);
     printf("%d\n", result);
        return 0;
}*/
