#include "main.h"
/**
 * _strlen - return the lenght of string
 * @c: the string
 * Return: results
 */
int _strlen(char *c)
{
	int i = 0;

	if (!c)
	{
		return (0);
	}
	while (*c)
	{
		i++;
	}
	return (i);
}
/**
 * create_file - create a file
 * @filename: the name of file
 * @text_content : the content of file
 * Return: results
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t b = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (len)
		b = write(fd, text_content, len);
	close(fd);
	return (b == len ? 1 : -1);
}
