#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i;
	int szw;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC);

	if (fd == -1)
	{
		return (-1);
	}
	if (!text_content)
	{
		text_content = "";
	}
	for (i = 0; text_content[i] != '\0'; i++)
			;

	szw = write(fd, text_content, i);
	if (szw == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
