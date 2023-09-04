#include "main.h"
/**
 * main - copy a content
 * @ac: count the argument
 * @av: array of argument
 * Return: copied file
 */
int main(int ac, char **av)
{
	int fdFrom, fdTo, wr, reads;
	char buff[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}	fdFrom = open(av[1], O_RDONLY);
	if (fdFrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}	fdTo = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fdTo == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	while ((reads = read(fdFrom, buff, 1024)) > 0)
	{	wr = write(fdTo, buff, reads);
		if (wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	if (reads == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (close(fdFrom) == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't close fd %d", fdFrom);
		exit(100);
	}
	if (close(fdTo) == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't close fd %d", fdTo);
		exit(100);
	}
	return (0);
}
