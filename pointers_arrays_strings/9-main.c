#include <stdio.h>
#include "main.h"

/**
 * main - check the code for _strcpy
 *
 * Return: Always 0.
 */
int main(void)
{
	char dest[100];

	/* Regular string */
	_strcpy(dest, "Holberton!");
	printf("str = \"%s\"\n", dest);

	/* Long string */
	_strcpy(dest, "Lorem ipsum dolor sit amet, consectetur adipiscing elit.");
	printf("str = \"%s\"\n", dest);

	/* Empty string */
	_strcpy(dest, "");
	printf("str = \"%s\"\n", dest);

	return (0);
}

