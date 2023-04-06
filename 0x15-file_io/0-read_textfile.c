#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT
 * @filename: text filename
 * @letters: letters to be read
 *
 * Return: ...
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf = malloc(sizeof(char) * letters);
	ssize_t fd;
	ssize_t r;
	ssize_t w;

	if (!buf)
		return (0);
	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	r = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	free(buf);
	close(fd);
	return (w);
}
