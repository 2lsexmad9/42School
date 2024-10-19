/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adal-bos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:12:13 by adal-bos          #+#    #+#             */
/*   Updated: 2024/07/07 21:24:12 by adal-bos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
	{
		return (1);
	}
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	else
	{
		return (nb * (ft_recursive_factorial(nb -1)));
	}
}
/*#include <stdio.h>
int main ()
	{
		printf("%d", ft_recursive_factorial(10));
		return (0);
	}
*/
