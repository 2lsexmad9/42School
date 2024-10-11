/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adal-bos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 04:38:11 by adal-bos          #+#    #+#             */
/*   Updated: 2024/10/09 04:38:35 by adal-bos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_free(char **str)
{
	if (str && *str)
	{
		free(*str);
		*str = NULL;
	}
	return (NULL);
}

char	*clean_storage(char *storage)
{
	char	*new_storage;
	char	*ptr;
	int		len;

	if (!storage)
		return (NULL);
	ptr = ft_strchr(storage, '\n');
	if (!ptr)
		return (ft_free(&storage));
	len = (ptr - storage) + 1;
	if (!storage[len])
		return (ft_free(&storage));
	new_storage = ft_substr(storage, len, ft_strlen(storage) - len);
	if (!new_storage)
		return (ft_free(&storage));
	ft_free(&storage);
	return (new_storage);
}

char	*new_line(char *storage)
{
	char	*line;
	char	*ptr;
	int		len;

	if (!storage)
		return (NULL);
	ptr = ft_strchr(storage, '\n');
	if (!ptr)
		return (NULL);
	len = (ptr - storage) + 1;
	line = ft_substr(storage, 0, len);
	if (!line)
		return (NULL);
	return (line);
}


char	*readbuf(int fd, char *storage)
{
	int		rid;
	char	*buffer;

	rid = 1;
	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (ft_free(&storage));
	buffer[0] = '\0';
	while (rid > 0 && !ft_strchr(buffer, '\n'))
	{
		rid = read (fd, buffer, BUFFER_SIZE);
		if (rid > 0)
		{
			buffer[rid] = '\0';
			storage = ft_strjoin(storage, buffer);
		}
	}
	free(buffer);
	if (rid == -1)
		return (ft_free(&storage));
	return (storage);
}

char	*get_next_line(int fd)
{
	static char	*storage = {0};
	char		*line;

	if (fd < 0)
		return (NULL);
	if ((storage && !ft_strchr(storage, '\n')) || !storage)
		storage = readbuf(fd, storage);
	if (!storage)
		return (NULL);
	line = new_line(storage);
	if (!line)
		return (ft_free(&storage));
	storage = clean_storage(storage);
	return (line);
}
/*int	main(void)
{
	int		fd;
	char	*line;
	int		a = 6;

	fd = open("test.txt", O_RDONLY);
	while (a)
{
		line = get_next_line(fd);
		printf("> %s", line);
		free(line);
		a --;
	}
	int close(int fd);
	return (0);
}*/
