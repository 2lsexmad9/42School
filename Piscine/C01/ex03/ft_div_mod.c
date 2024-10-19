/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adal-bos <adal-bos@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 15:40:44 by adal-bos          #+#    #+#             */
/*   Updated: 2023/12/04 20:13:31 by adal-bos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*int main (void)
{
    int b = 0;
	int a = 2;
    
    ft_div_mod(4, 2, &a, &b);
	printf("%d", a);
	return 0;
}*/
