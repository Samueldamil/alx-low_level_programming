#include "main.h"
/**
 * read_textfile - read a text file and print it to POSIX
 * @letters: numbers of letters it should read and print
 * @filename: pointer to the filename
 * Return: the actual number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t rcount, wcount;
	char *buffer;

	if (filename == NULL)
		return (0);
	file = open(filename, O_RDWR);
	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	rcount = read(file, buffer, letters);
	if (rcount == -1)
		return (0);
	wcount = write(STDOUT_FILENO, buffer, rcount);

	if (wcount == -1 || rcount != wcount)
		return (0);

	free(buffer);

	close(file);
	return (wcount);
}
