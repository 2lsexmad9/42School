/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adal-bos <adal-bos@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:24:27 by adal-bos          #+#    #+#             */
/*   Updated: 2023/12/05 16:58:56 by adal-bos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;

	div = *a / *b;
	*b = *a % *b;
	*a = div;
}
/*int main (void)
{

    int a = 32;
	int b = 5;
    
    ft_ultimate_div_mod(&a, &b);
    	printf("%d", a);
        printf("\n");
        printf("%d", b);
        return 0;
}*/
