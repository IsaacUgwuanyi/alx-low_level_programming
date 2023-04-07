#include "main.h"

/**
 * str_length - Finds the length of a string.
 * @str: Pointer to the string.
 *
 * Return: Length of the string.
 */
size_t str_length(char *str)
{
	size_t i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: Name of the file.
 * @text_content: NULL terminated string to append to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor;
	ssize_t write_length;

	if (filename == NULL)
		return (-1);
	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1)
		return (-1);
	if (text_content != NULL)
		write_length = write(file_descriptor, text_content, str_length(text_content));
	close(file_descriptor);
	if (write_length == -1)
		return (-1);
	return (1);
}

