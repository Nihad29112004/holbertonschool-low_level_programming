#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14 ten times
 */
void more_numbers(void)
{
int i, j;

for (i = 0; i < 10; i++) /* 10 times */
{
for (j = 0; j <= 14; j++)
{
if (j >= 10)
_putchar('1'); /* onluq rəqəm */
_putchar((j % 10) + '0'); /* birlər rəqəmi */
}
_putchar('\n');
}
}

