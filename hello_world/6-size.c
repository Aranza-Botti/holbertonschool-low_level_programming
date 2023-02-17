#include<stdio.h>
#include<stdint.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
printf("Size of char: %zu byte(s)\n", sizeof(char));
printf("Size of int: %zu byte(s)\n", sizeof(int));
printf("Size of long long: %zu byte(s)\n", sizeof(long int));
printf("Size of float: %zu byte(s)\n", sizeof(float));
printf("Size of long double: %zu byte(s)\n", sizeof(long long int));
return (0);
}
