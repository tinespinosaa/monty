#include "monty.h"

int main(int argc, char *argv[])
{
	FILE *stream;
	char *line = NULL;
	size_t len = 0;
	ssize_t nread;
	unsigned int index = 0;
	char *command = NULL, *data = NULL, **tokens = NULL;

	/* no more than arguments */
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		return (EXIT_FAILURE);
	}

	/* testeo del archivo */
	stream = fopen(argv[1], "r");
	if (stream == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s", argv[1]);
		return (EXIT_FAILURE);
	}

	/* lectura del archivo */
	while ((nread = getline(&line, &len, stream)) != -1)
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


	/* final */
	free(line);
	fclose(stream);
	return (EXIT_SUCCESS);
}
