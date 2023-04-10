#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: the name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int bytes, min;

	if (!filename)
		return (-1);

	min = open(filename, O_WRONLY | O_APPEND);
	if (min == -1)
		return (-1);

	if (text_content)
	{
		bytes = write(min, text_content, strlen(text_content));
		if (bytes == -1)
			return (-1);
	}

	close(min);
	return (1);
}
