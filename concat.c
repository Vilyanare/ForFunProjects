#include"holberton.h"
/**
 *concat - concatetnates two strings
 *@s1: array to append the second string to
 *@s2: string to append to s1
 *Return: poiinter to appended string
 */
char *concat(char *s1, char *s2)
{
	i f(*s1 != '\0')
		concat(s1 + 1, s2);
	if (*s1 == '\0')
	{
		do {
			*s1 = *s2;
			s1++;
			s2++;
		} while (*s2 != '\0');
	}
	return (s1);
}
