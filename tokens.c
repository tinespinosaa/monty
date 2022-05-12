#include "monty.h"

/**
 * tokenizer - function that create tokens
 * @input: is a char pointer of a string
 * @delim: is a char pointer delimitator
 *
 * Return: double pointer to strings
 */

char **tokenizer(char *input, char *delim)
{
	char **av = NULL;

	av = _strtok(input, delim);

	return (av);
}
