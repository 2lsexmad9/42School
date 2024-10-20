* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adal-bos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 05:58:58 by adal-bos          #+#    #+#             */
/*   Updated: 2024/10/20 16:17:19 by adal-bos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_read_file(int fd, char	*remain)
{
	char	*buffer;
	int		byte_read;

	buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (free(remain), remain = NULL, NULL);
	byte_read = 1;
	while (byte_read > 0 && ft_strchr(remain, '\n') == 0)
	{
		byte_read = read(fd, buffer, BUFFER_SIZE);
		if (byte_read == -1)
			return (free(remain), free(buffer), NULL);
		buffer[byte_read] = '\0';
		remain = ft_strjoin(remain, buffer);
		if (!remain)
			break ;
	}
	free(buffer);
	return (remain);
}

char	*ft_get_line(char *remain)
{
	char	*line;
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (remain[len] != '\n' && remain[len] != '\0')
		len++;
	if (remain[len] == '\n')
		len++;
	line = (char *)malloc((len + 1) * sizeof(char));
	if (!line)
		return (NULL);
	while (i < len)
	{
		line[i] = remain[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*ft_remove_line(char *remain)
{
	char	*str;
	int		i;
	int		len;

	i = 0;
	len = 0;
	if (!remain[len])
	{
		free(remain);
		remain = NULL;
		return (NULL);
	}
	while (remain[len] != '\n' && remain[len] != '\0')
		len++;
	if (remain[len] == '\n')
		len++;
	str = (char *)malloc(((ft_strlen(remain + len)) + 1) * sizeof(char));
	if (!str)
		return (free(remain), remain = NULL, NULL);
	while (remain[len] != '\0')
		str[i++] = remain[len++];
	str[i] = '\0';
	free(remain);
	remain = NULL;
	return (str);
}

char	*get_next_line(int fd)
{
	static char	*remain;
	char		*line;

	if (fd < 0 || BUFFER_SIZE < 0)
		return (NULL);
	if (!remain)
		remain = ft_strdup("");
	if (!remain)
		return (NULL);
	remain = ft_read_file(fd, remain);
	if (!remain)
		return (NULL);
	if (remain[0] == '\0')
	{
		free(remain);
		remain = NULL;
		return (NULL);
	}
	line = ft_get_line(remain);
	if (!line || line[0] == '\0')
		return (free(remain), remain = NULL, NULL);
	remain = ft_remove_line(remain);
	return (line);
}

/*#include <stdio.h>
int			main(int ac, char **av)
{
	int		fd;
	char	*line;


	line = NULL;
	fd = open(av[1], O_RDONLY);
	while (ac)
	{
		line = get_next_line(fd);
		printf("line: %s\n", line);
		if (!line)
			break ;
		free(line);
	}
	close(fd);
}*/
