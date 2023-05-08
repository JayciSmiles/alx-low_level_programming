#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and
 * prints it to the POSIX standard output.
 * @filename: the name of the file to read.
 * @letters: the number of letters to read and print.
 *
 * Return: the actual number of letters read and printed,
 * or 0 if an error occurs.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t num_read, num_written;
	char *buf;

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	FILE *fp = fopen(filename, "r");

	if (fp == NULL)
	{
		free(buf);
		return (0);
	}

	num_read = fread(buf, sizeof(char), letters, fp);
	if (num_read == -1)
	{
		free(buf);
		fclose(fp);
		return (0);
	}
	num_written = fwrite(buf, sizeof(char), num_read, stdout);
	if (num_written == -1 || num_written != num_read)
	{
		free(buf);
		fclose(fp);
		return (0);
	}
	free(buf);
	fclose(fp);
	return (num_written);
}
