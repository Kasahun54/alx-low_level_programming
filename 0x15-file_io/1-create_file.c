#include "main.h"
/**
 * create_file - function to create a file
 * @filename: name of the file
 * @text_content: create an empty file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, length = 0;
	long int wr;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[length])
			length++;
		wr = write(fd, text_content, length);
		if (wr == -1)
			return (-1);
	}
	if (close(fd) == -1)
		return (-1);
	return (1);
}
