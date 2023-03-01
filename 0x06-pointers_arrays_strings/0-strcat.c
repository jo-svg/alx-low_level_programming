#include "main.h"
/**
 *_strcat - concatenates two strings
 *@dest: A pointer to a character that will be changed
 *@src: A pointer to a character that will also be changed
 *Return: dest
 */

char *_strcat(char *dest, char *src)
{
int i, l;

i = 0;
while (dest[i] != '\0')
{
i++;
}

l = 0;
while (src[l] != '\0')
{
dest[i] = src[l];
l++;
i++;
}
dest[i] = '\0';

return (dest);
}
