#include "main.h"
/**
 * read_textfile - Reads a text file and prints its contents to stdout.
 *@filename : names of the file to read.
 *@letters : number of letters to be read.
 *
 *Return:  the actual number of letters it could read and print
 *         else 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *nam;
ssize_t file, buk, w;
nam = malloc(sizeof(char) * letters);/*memory allocation*/
if (!nam)
return (0);
if (filename == NULL)
return (0);
/*opening a file */
file = open(filename, O_RDONLY);
if (file == -1)
{
free(nam);
return (0);
}
buk = read(file, nam, letters);
w = write(STDOUT_FILENO, nam, buk);
close(file);
return (w);
}
