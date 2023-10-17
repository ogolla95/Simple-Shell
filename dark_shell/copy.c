#include "shell.h"
/**
 * @dest: dest string arg
 * @strcopy: copy a string
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int n, len = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	for (n = 0; n < len; n++)
	{
		dest[i] = src[n];
	}
	dest[n] = '\0';
	return (dest);
}
