#include "holberton.h"

/**
 * create_file - function that creates a file.
 * @filename: const char type
 * @text_content: char type
 * Return: always success
 */

int create_file(const char *filename, char *text_content)
{

int i = 0;
int fd, fw;

if (filename == NULL)
return (-1);
fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600 | S_IWUSR);
if (fd == -1)
return (-1);
if (text_content == NULL)
return (1);
while (text_content[i])
i++;
fw = write(fd, text_content, i);
close(fd);
if (fw == -1 || fw != i)
return (-1);
return (1);
}
