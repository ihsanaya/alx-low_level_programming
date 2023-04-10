#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file to read from.
 * @letters: number of letters to read from file.
 * Return: the actual number of letters or 0 if failed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *off = NULL;
	int min;
	ssize_t bytes;

	if (!filename || !letters)
		return (0);

	off = malloc(letters + 1);
	if (!off)
		return (0);

	min = open(filename, O_RDONLY);
	if (min == -1)
		return (free(off), 0);

	bytes = read(min, off, letters);
	if (bytes == -1)
		return (free(off), 0);

	off[letters] = '\0';
	bytes = write(STDOUT_FILENO, off, bytes);
	if (bytes == -1)
		return (free(off), 0);

	free(off);
	close(min);
	return (bytes);
}
