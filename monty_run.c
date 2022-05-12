#include "monty.h"

int monty_exec(FILE *pfile)
{
	size_t len = 0;
	ssize_t nread;
	unsigned int index = 0;
	char *line = NULL;
	char **tokens = NULL, *data = NULL, *command = NULL;

	while ((nread = getline(&line, &len, pfile)) != -1)
	{
		tokens = tokenizer(line, " ");
		command = tokens[0];
		data = tokens[1];

		printf("linea %u: %s", index, line);
		printf("comando: %s\n", command);
		printf("data: %s\n", data);

		_free(tokens);
		index++;
	}

	free(line);
	return(EXIT_SUCCESS);
}
