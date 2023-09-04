#include "main.h"
/**
 * read_textfile - that reads the text file
 * @filename: file to be read
 * @letters: the amount of bytes to be read
 * Return: counted print letter
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, letprint, wr;
	char *buf;

	buf = malloc(letters);
	if (buf == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);
	letprint = read(fd, buf, letters);
	if (letprint == -1)
		return (0);
	wrote = write(STDOUT_FILENO, buf, letprint);
	if (wr == -1)
		return (0);
	if (close(fd) == -1)
		return (0);
	free(buf);
	return (letprint);
}
