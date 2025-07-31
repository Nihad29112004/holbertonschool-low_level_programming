/*
 * File: 2-strlen.c
 * Auth: Brennan D Baraban
 */
#include "main.h"
#include <stddef.h>

/**
 * _strlen - Returns the length of a string.
 * @s: The string to get the length of.
 *
 * Return: The length of @s.
 */
size_t _strlen(const char *s)
{
size_t i = 0;

while (s[i] != '\0')
i++;

return (i);
}

