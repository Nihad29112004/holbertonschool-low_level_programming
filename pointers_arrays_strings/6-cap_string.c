#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to modify.
 *
 * Return: The modified string.
 */
char *cap_string(char *str)
{
int i = 0;
int capitalize_next = 1;
char sep[] = " \t\n,;.!?\"(){}";
int j;

while (str[i] != '\0')
{
if (capitalize_next && (str[i] >= 'a' && str[i] <= 'z'))
{
str[i] = str[i] - ('a' - 'A');
capitalize_next = 0;
}
else
{
capitalize_next = 0;
for (j = 0; sep[j] != '\0'; j++)
{
if (str[i] == sep[j])
{
capitalize_next = 1;
break;
}
}
}
i++;
}

return (str);
}
