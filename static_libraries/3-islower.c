#include "main.h"
/**
* _islower - tests character lowercase
*
* @c: The character to be checked.
*
* Return: 1 if it is a lowercase letter, 0 if it is not.
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
