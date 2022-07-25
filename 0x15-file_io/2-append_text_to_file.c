#include "main.h"
/**
 * append_text_to_file - append a text to the end of file
 * @filename: name of the file
 * @text_content: string to add at end of a file
 * Return: file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, status, i;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	file = open(filename, O_APPEND | O_WRONLY);

	if (file == -1)
		return (-1);

	for (i = 0; text_content[i] != '\0'; i++)
		;
	status = write(file, text_content, i);
	if (status == -1)
		return (-1);

	close(file);
	return (1);
}
