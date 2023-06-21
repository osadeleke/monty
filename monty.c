#include "monty.h"

/**
 * main - program starts
 * @argc: number of arguments passed
 * @argv: array containing arguments passed from user
 * Return: 0 if sucessful
 */

int main(int argc, char **argv)
{
	FILE *file; 
		

	if (!(argc > 1 && argc < 3))
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		fprintf(stdout, "%s is ok\n", argv[1]);
	}

	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	else
	{
		fprintf(stdout, "%s opened fine\n", argv[1]);
	}

	fclose(file);
	return (0);
}
