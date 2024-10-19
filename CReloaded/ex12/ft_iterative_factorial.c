/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adal-bos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 22:17:09 by adal-bos          #+#    #+#             */
/*   Updated: 2024/07/07 22:17:12 by adal-bos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	factorial = nb;
	if (nb < 0 || nb > 19)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (nb-- > 1)
		factorial *= nb;
	return (factorial);
}
