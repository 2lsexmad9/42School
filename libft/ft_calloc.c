/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                          :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: adal-bos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 01:58:23 by adal-bos          #+#    #+#             */
/*   Updated: 2024/07/15 02:01:31 by adal-bos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = (void *)malloc(count * size);
	if (!p)
		return (NULL);
	ft_bzero(p, (count * size));
	return (p);
}
