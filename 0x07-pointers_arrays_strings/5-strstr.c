#include <stdlib.h>
#include "main.h"
/**
* _strstr - Locate a substring
*
* @haystack: paameter for longer string to search
* @needle: parameter for substring to search for
*
* Return: Pointer to the beginning of the located substring, or NULL if
* the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
	int i;
	int s = 0;

i	while (needle[s] != '\0')
		s++;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != s)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
