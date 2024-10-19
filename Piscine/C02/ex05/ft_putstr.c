/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adal-bos <adal-bos@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 20:15:23 by adal-bos          #+#    #+#             */
/*   Updated: 2023/12/05 13:15:20 by adal-bos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}
/*int main (void)
{
	char str [] = "asdfg";
	ft_putstr (str);
	write(1, *str, 1);
	return 0;
//incluir un write con salto de linea debajo del while del ft_putstr.
*/
