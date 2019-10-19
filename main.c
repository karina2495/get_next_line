#include "get_next_line.h"
#include <fcntl.h>

int				main(int argc, char **argv)
{
	int			i;
	int			fd;
	char		*line;

	line = NULL;
	if (argc == 2)
	{
		i = 0;
		fd = open(argv[1], O_RDONLY);
		while ((get_next_line(fd, &line)) > 0)
		{
			ft_putstr(line);
			free(line);
			ft_putchar('\n');
		}
		close(fd);
	}
	return (0);
}
