#include <stdio.h>
/**
  *_strcmp - compares two strings.
  *@s1: The first string
  *@s2: The second string.
  *Return:0, if the s1 and s2 are equal
  *a negative value if s1 is less than s2;
  *a positive value if s1 is greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	int i, diff;

	i = 0;
	diff = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else
		{
			diff = s1[i] - s2[i];
			break;
		}
	}

	return (diff);
}
