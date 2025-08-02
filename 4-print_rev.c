#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: The string to print
 */
void print_rev(char *s)
{
int i = 0;

    /* 1. Tap: Stringin uzunluğunu tap */
while (s[i] != '\0')
i++;

   /* 2. Tərsinə çap et */
while (i--)
_putchar(s[i]);

_putchar('\n');
}

