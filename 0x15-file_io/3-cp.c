#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: filename  buffer is storing chars for.
 *
 * Return: A pointer to buffer allocated.
 */
char *create_buffer(char *file)
{
char *buffer;

buffer = malloc(sizeof(char) * 1024);

if (buffer == NULL)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", file);
exit(99);
}

return (buffer);
}

/**
 * close_file - Closes file descriptors.
 * @fd: the file descriptor to close
 */
void close_file(int fd)
{
int x;

x = close(fd);

if (x == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}

/**
 * main - copy a file's contents to another file.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 *              If file_from does not exist or cannot be read - exit code 98.
 *              If file_to cannot be created or written to - exit code 99.
 *              If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
int nm, t, rd, wp;
char *buffer;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

buffer = create_buffer(argv[2]);
nm = open(argv[1], O_RDONLY);
rd = read(nm, buffer, 1024);
t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

do {
if (nm == -1 || rd == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read from file %s\n", argv[1]);
free(buffer);
exit(98);
}

wp = write(t, buffer, rd);
if (t == -1 || wp == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", argv[2]);
free(buffer);
exit(99);
}

rd = read(nm, buffer, 1024);
t = open(argv[2], O_WRONLY | O_APPEND);

} while (rd > 0);

free(buffer);
close_file(nm);
close_file(t);

return (0);
}
