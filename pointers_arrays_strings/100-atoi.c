#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: The string to convert
 *
 * Return: The integer converted from the string
 */
int _atoi(char *s)
{
int i = 0, sign = 1, result = 0;
int digit;

while (s[i] != '\0')
{
if (s[i] == '-')
sign *= -1;
else if (s[i] >= '0' && s[i] <= '9')
{
digit = s[i] - '0';

			/* Check overflow before adding digit */
if (sign == 1 && (result > (2147483647 - digit) / 10))
return (2147483647);
if (sign == -1 && (result > (2147483648U - digit) / 10))
return (-2147483648);

result = result * 10 + digit;
}
else if (result)
break;
i++;
}

return (result * sign);
}
