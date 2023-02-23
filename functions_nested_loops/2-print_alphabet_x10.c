#include "main.h"
/**
* print_alphabet_x10 - alphabet 10 times.
*
* Return: Nothing.
*
*/
void print_alphabet_x10(void)
{
int printx10;
char alphabet;
for (printx10 = 0; printx10 < 10; ++printx10)
{
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}
_putchar('\n');
}
}
