#include<stdio.h>
#include"holberton.h"
/**
 *main - testing function
 *Return: always 0
 */
int main(void)
{
	char a[20] = "Hello ";
	char *s = "World";
	char *p = NULL;

	p = concat(a, s);
	printf("%s\n", p);
	return (0);
}
