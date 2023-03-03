#include "main.h"
#include <ctype.h>
/**
* cap_string - Capitalizes all words of a string.
* @s: String to capitalize.
* Return: Pointer to the resulting string.
*/
char *cap_string(char *s)
{
int i, j;
char sep[] = ",;.!?\"(){}\n\t ";
for (i = 0; str[i] != '\0'; i++)
{
if (i == 0)
{
if (str[i] >= 'a' && str[i] <= 'z')
str[i] -= 32;
}
for (j = 0; sep[j] != '\0'; j++)
{
if (str[i] == sep[j])
{
if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
str[i + 1] -= 32;
break;
}
}
}
return (str);
}
