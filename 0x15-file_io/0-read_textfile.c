#include "main.h"

/**
* read_textfile - reads a text and prints it to the POSIX standard output
* @filename: file to RW
* @letters: number of letters to RW
*
* Return: text
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n;
	int file;
	char *text;

	if (!filename)
		return (0);
	text = malloc(sizeof(char) * letters + 1);
	if (text == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(text);
		return (0);
	}
	n = read(file, text, sizeof(char) * letters);
	if (n == -1)
	{
		free(text);
		close(file);
		return (0);
	}
	n = write(STDOUT_FILENO, text, n);
	if (n == -1)
	{
		free(text);
		close(file);
		return (0);
	}
	free(text);
	close(file);
	return (n);
}