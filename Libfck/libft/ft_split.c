/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adal-bos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 11:28:08 by adal-bos          #+#    #+#             */
/*   Updated: 2024/07/11 13:41:16 by adal-bos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void	ft_free_split(char **mem, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(mem[i]);
		i++;
	}
	free(mem);
}

int	ft_readwords(char const *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
			count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (count);
}

int	ft_wordlen(char const *s, char c)
{
	int	i;
	int	length;

	length = 0;
	i = 0;
	while (s[i] == c)
		i++;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
		length++;
	}
	return (length);
}

char	**ft_split2(char const *s, char c, char **mem)
{
	int	i;
	int	j;
	int	k;
	int	words;

	j = 0;
	words = ft_readwords(s, c);
	mem = (char **)malloc(sizeof(char *) * (words + 1));
	if (!mem)
		return (NULL);
	i = -1;
	while (++i < words)
	{
		while (s[j] == c && s[j] != '\0')
			j++;
		mem[i] = (char *)malloc(sizeof(char) * (ft_wordlen(&s[j], c) + 1));
		if (!mem[i])
			return (ft_free_split(mem, i), NULL);
		k = 0;
		while (s[j] != c && s[j] != '\0')
			mem[i][k++] = s[j++];
		mem[i][k] = '\0';
	}
	mem[i] = NULL;
	return (mem);
}

char	**ft_split(char const *s, char c)
{
	char	**mem;

	mem = NULL;
	if (!s)
		return (NULL);
	return (ft_split2(s, c, mem));
}
