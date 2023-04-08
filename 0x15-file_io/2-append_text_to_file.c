#include "main.h"

/**
 * append_text_to_file - a function to appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a, b, ch = 0;

	if (!filename)
		return (-1);
	a = open(filename, O_WRONLY | O_APPEND);
	if (a == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (ch = 0; text_content[ch];)
			ch++;
		b = write(a, text_content, ch);
		if (b == -1)
			return (-1);
	}

	close(a);

	return (1);
}
