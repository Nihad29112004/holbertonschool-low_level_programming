#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: the string to print
 */
void print_rev(char *s)
{
int i = 0;

    /* string uzunluğunu bul */
while (s[i] != '\0')
i++;
    /* sondan başa doğru yazd*/
while (i > 0)
{
i--;
_putchar(s[i]);
}
_putchar('\n');
}
