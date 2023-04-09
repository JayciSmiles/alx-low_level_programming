#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buf(char *file);
void close_file(int ch);

/**
 * create_buf - Allocates 1024 bytes for a buf.
 * @file: The name of file buf is storing chars for.
 *
 * Return: A pointer to the newly-allocated buf.
 */
char *create_buf(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buf);
}

/**
 * close_file - Closes the file descriptors.
 * @ch: The file descriptor to be closed.
 */
void close_file(int ch)
{
	int ar;

	ar = close(ch);
	if (ar == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close ch %d\n", ch);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments.
 * @argv: arguments vector.
 *
 * Return: Always 0.
 *
 * Description: If the argument count is incorrect - exit code 97.
 *              If file_from doesn't exist or can't be read - exit code 98.
 *              If file_to can't be created or written to - exit code 99.
 *              If file_to or file_from can't be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	char *buf;
	int file_from, file_to, e, d;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buf = create_buf(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	e = read(file_from, buf, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (file_from == -1 || e == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}
		d = write(file_to, buf, e);
		if (file_to == -1 || d == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}
		e = read(file_from, buf, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (e > 0);

	free(buf);
	close_file(file_from);
	close_file(file_to);

	return (0);
}
