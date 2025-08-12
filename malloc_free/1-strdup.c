#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if str is NULL
 *         or if memory allocation fails.
 */
char *_strdup(char *str)
{
char *dup;
int len, i;

if (str == NULL)
return (NULL);

len = strlen(str);
dup = malloc(len + 1);  /* +1 for the terminating null byte */
if (dup == NULL)
return (NULL);

for (i = 0; i <= len; i++)  /* copy including '\0' */
dup[i] = str[i];

return (dup);
}
