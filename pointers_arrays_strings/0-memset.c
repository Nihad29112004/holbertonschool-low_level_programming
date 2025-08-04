/*
 * File: 0-memset.c
 * Auth: Nihad
 */

#include "main.h"
#include <stddef.h>
/**
 * memset - Fills the first n bytes of the memory area
 *          pointed to by @s with the constant byte @c.
 * @s: A pointer to the memory area to be filled.
 * @c: The character to fill the memory area with.
 * @n: The number of bytes to be filled.
 *
 * Return: A pointer to the filled memory area @s.
 */
void *_memset(void *s, int b, unsigned int n)
{
    unsigned int i;
    unsigned char *ptr = s;

    for (i = 0; i < n; i++)
        ptr[i] = (unsigned char)b;

    return s;
}
