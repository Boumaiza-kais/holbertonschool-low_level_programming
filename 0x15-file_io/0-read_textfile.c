#include "holberton.h"
/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: const char type
 * @letters:  size_t type
 * Return: always success
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t fw;
ssize_t fr;
char *ptr;
int fd;

if (filename == NULL)
return (0);
ptr = malloc(letters * sizeof(char));
if (ptr == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
fr = read(fd, ptr, letters);
if (fr == -1)
return (0);
*(ptr + fr) = '\0';
fw = write(STDOUT_FILENO, ptr, fr);
if (fw == -1 || fw != fr)
return (0);
close(fd);
return (fw);
}
