#include "shell.h"
/**
 * User to type "Exit"
 * Handle_Exit : Terminates the programme
 * @cmd: Used to read the str
 * Return: 0;
 *
 */
void handle_exit(char *cmd)
{
	if (_strcmp("exit", cmd) == 0)
	{
		free(cmd);
		exit(EXIT_SUCCESS);
	}
}
