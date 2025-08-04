#include "main.h"
/**
 * _memcpy - Custom function to fill memory with a constant byte.
 * @s: Pointer to the memory area.
 * @b: The byte to fill with.
 * @n: Number of bytes to fill.
 *
 * Return: Pointer to memory area s.
 */

char *_memcpy(char *dest, const char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
dest[i] = src[i];

return (dest);
}
