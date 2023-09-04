#include "main.h"
/**
 * append_text_to_file - appends at the end of a text file
 * @filename: the name of a file
 * @text_content: is null
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, length = 0;
	long int wr;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
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
