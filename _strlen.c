#include "shell.h"
/**
  * _strlen - returns the length of a string.
  * @s: The string whose length is to be returned.
  *Return: The length of s as an integer.
*/
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
