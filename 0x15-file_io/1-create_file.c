#include "main.h"

/**
 * create_file - a function that that create a file
 * @filename : the file name to be created
 * @text_content : the content of the file
 *
 * Return : 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
	{
		return (-1);
		exit(0);
	}
	close(fd);

	return (1);

}
