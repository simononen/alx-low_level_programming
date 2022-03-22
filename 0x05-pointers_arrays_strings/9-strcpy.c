#include "main.h"
/**
 * _strcpy - Copy string at the end of another string including \0.
 *
 * @dest: pointer parameter to string to be copied to
 *
 * @src: pointer parameter to string to be copied.
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int j;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';
	return (dest);
}
