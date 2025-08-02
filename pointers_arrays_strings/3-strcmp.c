#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: Negative if s1 < s2, zero if s1 == s2, positive if s1 > s2.
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;

while (s1[i] && s2[i])
{
if (s1[i] != s2[i])
return (s1[i] - s2[i]);
i++;
}

return (s1[i] - s2[i]);
}
