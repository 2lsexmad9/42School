int			main(int ac, char **av)
{
	int		fd;
	char	*line;

	line = NULL;
	fd = open(av[ac-1], O_RDONLY);
	while (get_next_line(fd, &line))
	{
		ft_putendl(line);
	}
	close(fd);
}
