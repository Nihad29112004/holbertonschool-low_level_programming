#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from 0 to 98
 * @n: starting number (ignored, always starts from 0)
 *
 * Return: void
 */
void print_to_98(int n)
{
    int i;

    (void)n; /* n istifadə edilmir */

    for (i = 0; i <= 98; i++)
    {
        printf("%d", i);
        if (i != 98)
            printf(", ");
    }
    printf("\n");
}
