#ifndef SHELL_H
#define SHELL_H
/**
 * Author : Ogolla Fredrick
 * struct num - structure that contains variables
 * 
 */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <stdbool.h>
#define MAX_C 14
#include <string.h>
#include <sys/wait.h>
typedef struct num
{
	int cnt;
} num;
void prompt(char **arv, char **envp, bool flg);
int _strcmp(char *s1, char *s2);
char *_strcat(char *dest, char *src);
char *handle_path(char **rgv, char *cmd);
char *_strncpy(char *dest, char *src, int n);
char *get_path(char *cmd);
char *_getenv(char *name);
char **tokenize_env(char *path);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
void handle_exit(char *cmd);
void runcmd(char **rgv, char **arv, char **envp);
char *trim(char *cmd);
extern char **environ;
#endif
