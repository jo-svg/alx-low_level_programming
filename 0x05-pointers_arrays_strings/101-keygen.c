#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point generates a random password
 *
 * Return: the generated password
 */
int main(void)
{
char c;
int i;

srand(time(0));
while (i <= 1758)
{
c = rand() % 100;
i += c;
putchar(c);
}
putchar(1758 - i);
return (0);
}
