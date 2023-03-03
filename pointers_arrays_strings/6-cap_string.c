#include "main.h"
#include <ctype.h>
/**
* cap_string - Capitalizes all words of a string.
* @s: String to capitalize.
* Return: Pointer to the resulting string.
*/
char *cap_string(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (i == 0 || !isalpha(s[i - 1]))
s[i] = toupper(s[i]);
if (s[i] == '\t' || s[i] == '\n' || s[i] == ' ' || s[i] == ',' ||
s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?' ||
s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{' ||
s[i] == '}')
{
i++;
if (s[i] >= 'a' && s[i] <= 'z')
s[i] = toupper(s[i]);
}
}
return (s);
}
