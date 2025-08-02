#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: the string to convert
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{
int i = 0;
int sign = 1;
unsigned int result = 0;
int found_digit = 0;

    /* İşaretleri ve boşlukları geç */
while (s[i])
{
if (s[i] == '-')
sign *= -1;
else if (s[i] == '+')
            ;
else if (s[i] >= '0' && s[i] <= '9')
{
found_digit = 1;
            /* Sayıyı oluştur */
while (s[i] >= '0' && s[i] <= '9')
{
result = result * 10 + (s[i] - '0');
i++;
}
break;
}
i++;
}

if (!found_digit)
return (0);

return ((int)(sign * (int)result));
}
