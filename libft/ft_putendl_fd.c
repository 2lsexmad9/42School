/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adal-bos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 12:00:59 by adal-bos          #+#    #+#             */
/*   Updated: 2024/07/11 14:58:37 by adal-bos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*void  ft_putchar_fd(char c, int fd)
{
        write(fd, &c, 1);
}

void    ft_putstr_fd(char *s, int fd)
{
        while (s && *s != 0)
        {
                ft_putchar_fd(*s, fd);
                s++;
        }
}
*/
void	ft_putendl_fd(char *s, int fd)
{
	if (s)
	{
		ft_putstr_fd(s, fd);
		ft_putchar_fd('\n', fd);
	}
}
/*int main(void)
{
	ft_putendl_fd("Tengo los cojones negros",1);
	ft_putendl_fd("tada tada tada",1);
	return (0);
}*/
