#include "main.h"

/**
 * print_diagonal - draws a diagonal line using '\'
 * @n: number of times '\' should be printed
 */
void print_diagonal(int n)
{
int i, j;
if (n <= 0)
{
_putchar('\n');
return;
}

for (i = 0; i < n; i++)
{
/* çap et i qədər boşluq */
for (j = 0; j < i; j++)
_putchar(' ');
_putchar('\\');
_putchar('\n');
}
}
