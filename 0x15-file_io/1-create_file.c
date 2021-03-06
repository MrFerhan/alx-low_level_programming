#include "main.h"

/**
 * _strlen - main function to swqp
 *
 * @s: int var to be checked for tis length
 * Return: return 0
 */

int _strlen(char *s)
{
	int LOF;
	int i = 0;

	for (LOF = 0; s[LOF] != '\0'; LOF++)
	{
		i++;
	}
	return (i);
}
/**
* create_file - create file
* @filename: file to be created
* @text_content: content to write into the file.
*
* Return: 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	ssize_t n;
	int file;

	if (!filename)
		return (1);
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		n = write(file, text_content, _strlen(text_content));
		if (n == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
