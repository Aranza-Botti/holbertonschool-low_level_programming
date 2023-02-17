#include<unistd.h>
/**
* main - Entry point
*
* Description: Prints a message to standard error
*
* Return: Always 1
*/
int main(void)
{
char *message =
"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
ssize_t message_len = 59;
write(STDERR_FILENO, message, message_len);
return (1);
}
