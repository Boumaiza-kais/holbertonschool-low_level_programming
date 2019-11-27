#include "holberton.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: const char type
 * @text_content: char type
 * Return: always success
 */

int append_text_to_file(const char *filename, char *text_content)
{

int i = 0;
int fd, fw;

if (filename == NULL)
return (-1);
fd = open(filename, O_RDWR | O_APPEND);
if (fd == -1)
return (-1);
if (text_content == NULL)
return (1);
while (text_content[i])
i++;
fw = write(fd, text_content, i);
if (fw == -1 || fw != i)
return (-1);
return (1);
}
