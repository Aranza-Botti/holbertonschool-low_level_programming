#include<stdio.h>
/**
* main - Prints the alphabet in lowercase... then in uppercase.
*
* Return: 0 on success
*/
int main(void)
{
char c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}
char d = 'A';
while (d <= 'Z')
{
putchar(d);
d++;
}
putchar('\n');
return (0);
}
