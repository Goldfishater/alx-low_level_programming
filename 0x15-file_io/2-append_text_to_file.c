#include "main.h"

/**
 * append_text_to_file - Must append txt to the end of a file.
 * @filename: this is a pointer to the name of the target file.
 * @text_content: The string that must append to the end of the file.
 *
 * Return: On success, returns 1.
 *         On failure or if filename is NULL - returns -1.
 *         If the file doesn't exist or lacks write permissions - returns -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}

