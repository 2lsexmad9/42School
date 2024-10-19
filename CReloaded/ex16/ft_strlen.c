/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adal-bos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:19:42 by adal-bos          #+#    #+#             */
/*   Updated: 2024/07/04 17:21:27 by adal-bos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str [i] != '\0')
	{
		i++;
	}
	return (i);
}
/*#include <stdio.h>
int main (void)
{
	char str[] = "Life is good";
	int result = ft_strlen(str);
	printf("%d", result);
		return (0);
}*/
