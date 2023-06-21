#include "monty.h"
#include <string.h>

/**
 * main - program starts
 * @argc: number of arguments passed
 * @argv: array containing arguments passed from user
 * Return: 0 if sucessful
 */

int main(int argc, char **argv)
{
	FILE *file;
	char line[100];
	char *cmd, *val;

	/* check for the proper usage of program */
	if (!(argc > 1 && argc < 3))
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	/* open file and check for error in opening */
	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	/* Read and print the file */
	while (fgets(line, sizeof(line), file) != NULL)
	{
		cmd = strtok(line, " ");
		if (strcmp(cmd, "push") == 0)
		{
			val = strtok(NULL, " ");
			fprintf(stdout, "%s", val);
		}
	}

	/* close open file */
	fclose(file);
	return (0);
}
