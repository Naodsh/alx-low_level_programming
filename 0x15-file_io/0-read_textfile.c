#include "main.h"
/**
 * read_textfile - Reads letters from a text file and prints
 *	   it to the standard output.
 * @filename: The name of the file to be read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	char *buffer;
	ssize_t bytes_read, bytes_written;

	FILE *file = fopen(filename, "r");

	if (filename == NULL)
		return (0);
	if (file == NULL)
		return (0);

	buffer = malloc(letters + 1);

	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	bytes_read = fread(buffer, sizeof(char), letters, file);

	if (bytes_read <= 0)
	{
		free(buffer);
		fclose(file);
		return (0);
	}

	buffer[bytes_read] = '\0';

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	free(buffer);
	fclose(file);

	if (bytes_written != bytes_read)
		return (0);

	return (bytes_written);
}
