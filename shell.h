#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 *struct builtin_cmd - struct representing built in commands
 *@cmd:the name of the built in command.
 *@func: function pointer.
 */
typedef struct builtin_cmd
{
	char *cmd;
	void (*func)(char **);

} builtin;

extern char **environ;
int _strcmp(char *s1, char *s2);
void funcls(char **args);
char **getargs(char *lineptr);
void funcenv(__attribute__((unused)) char **args)

#endif
