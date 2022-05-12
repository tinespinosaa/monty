#include "monty.h"

int usage_error(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	return (EXIT_FAILURE);
}

int open_failure(char *filename)
{
	fprintf(stderr, "Error: Can't open the file %s", filename);
	return (EXIT_FAILURE);
}
