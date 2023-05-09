#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t szr, szw;
	char *buf;

	if (!filename)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	szr = read(fd, buf, letters);
	if (szr < 0)
		return (0);
	szw = write(STDOUT_FILENO, buf, szr);
	if (szr < 0)
		return (0);

	close(fd);
	free(buf);

	return (srw);
}
