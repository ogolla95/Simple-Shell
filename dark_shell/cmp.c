#include "shell.h"
/**
 * _strncmp - Compare a bytes in strb and strc
 * @a: Bytes to be checked
 * Return: > 0 if strb is less than strc
 */

int _strncmp(char *strb, char *strc, int a)
{
	if (!a)
		return (0);
	if (*strb == *strc)
		return (*strb ? _strncmp(strb + 1, strc + 1, a - 1) : 0);
	if (*strb)
		return (1);
	if (*strc)
		return (-1);
	return (*strb - *strc);
}
