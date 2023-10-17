#include "shell.h"
/**
 * intlen - Function that determining the length
 * @b: Parameter for the var
 * Return: 0;
 */
int intlen(int b)
{
	unsigned int num;
	int len = 1;

	if (b < 0)
	{
		len++;
		num = b * -1;
	}
	else
	{
		num = b;
	}
	while (num > 9)
	{
		len++;
		num = num / 10;
	}

	return (len);
}
/**
 * itoa - Function that converts a string to an int
 * @num: Paramater
 * Return: 0;
 */
char *_itoa(int num)
{
	char *buff;
	size_t  b;
	int len = intlen(num);

	buff = malloc(len + 1);
	if (!buff)
	{
		return (NULL);
	}
	buff[len] = '\0';
	if (num < 0)
	{
		b = num * -1;
		*buff = '-';
	}
	else
		b = num;
	len--;

	do {
		*(buff + len) = (b % 10) + '0';
		b /= 10;
		len--;
	} while (b > 0);
		return (buff);
}
/**
 * Geterror - Run a command function
 * @b: Argument
 * Return: 0;
 */
void geterror(num *b, char **arv, char *cmd)
{
	int len;
	char *errmsg, *cnt_str;

	cnt_str = _itoa(b->cnt);
	len = _strlen(arv[0]) + _strlen(cmd) + _strlen(cnt_str) + 17;
	errmsg = malloc(len);
	if (!errmsg)
	{
		return;
	}
	_strcpy(errmsg, arv[0]);
	_strcat(errmsg, ": ");
	_strcat(errmsg, cnt_str);
	_strcat(errmsg, ": ");
	_strcat(errmsg, cmd);
	_strcat(errmsg, ": not found\b");
	_strcat(errmsg, "\0");
	write(STDOUT_FILENO, errmsg, len);
	free(errmsg);
}
