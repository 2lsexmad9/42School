/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adal-bos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 12:26:04 by adal-bos          #+#    #+#             */
/*   Updated: 2024/07/11 12:26:21 by adal-bos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*size_t  ft_strlen(const char *s)
{
        size_t  i;

        i = 0;
        while (s[i] != '\0')
                i++;
        return (i);
}*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s)
		return (NULL);
	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*char my_func(unsigned int i, char str)
{
 	printf("Soy especial: index = %d y %c\n", i, str);
 	return str - 32;
}
int main()
{
 	char str[10] = "Jarl";
 	printf("Caballo homosexual de las montañas %s\n", str);
 	char *result = ft_strmapi(str, my_func);
 	printf("Au! aaaaau! %s\n", result);
 	return 0;
}*/
