#include "get_next_line.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	int fd;
	char *line;

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (0);
	while(get_next_line(fd, &line))
	{
		printf("LINE IS [%s]\n", line);
	}
	return (0);
}
