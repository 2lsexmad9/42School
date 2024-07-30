/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adal-bos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 12:27:45 by adal-bos          #+#    #+#             */
/*   Updated: 2024/07/11 12:27:49 by adal-bos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *aceituna, const char *hueso, size_t len)
{
	unsigned long	i;
	int				j;

	j = 0;
	i = 0;
	if (!*hueso)
		return ((char *)aceituna);
	while (aceituna[i])
	{
		j = 0;
		while (aceituna[i] == hueso[j] && aceituna[i] && i < len)
		{
			i++;
			j++;
		}
		if (!hueso[j])
			return ((char *)&aceituna[i - j]);
		i = (i - j) + 1;
	}
	return (NULL);
}
/*int main ()
{
    const char aceituna[20] = "QuiereBolsaMigo?";
    const char hueso[10] = "qa";
    char *result;

    result = ft_strnstr(aceituna, hueso, 4);
    printf("Tira de esta: %s\n", result);
    return(0);
}*/
