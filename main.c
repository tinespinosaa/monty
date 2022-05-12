#include "monty.h"

int main(int argc, char *argv[])
{
	FILE *pfile;
	int exit_status = EXIT_SUCCESS;

	/* no more than arguments */
	if (argc != 2)
		return (usage_error());

	/* testeo del archivo */
	pfile = fopen(argv[1], "r");
	if (pfile == NULL)
		return (open_failure(argv[1]));

	/* lectura del archivo y ejecucion de monty */
	exit_status = monty_exec(pfile);

	/* final */
	fclose(pfile);
	return (exit_status);
}
