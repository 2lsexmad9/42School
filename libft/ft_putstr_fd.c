/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adal-bos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 05:54:54 by adal-bos          #+#    #+#             */
/*   Updated: 2024/07/30 05:54:57 by adal-bos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
*/
void	ft_putstr_fd(char *s, int fd)
{
	while (s && *s != 0)
	{
		ft_putchar_fd(*s, fd);
		s++;
	}
}
/*int	main(void)
{
	ft_putstr_fd("Me tienes negro", 1);
	return(0);
}*/
