#include <unistd>

/**
* main - Entry point
*
*Description: print a quot using write function write
*(int fd.const void buf.size -t count)
*
*Return: 1 (notsuccess)
*/

int main(void)
{
char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
write(1, quo, 59);
return (1);
}
