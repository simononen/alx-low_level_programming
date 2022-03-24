#include "main.h"
/**
 * leet - encode string into 1337
 *
 * @s: pointer parameter to string
 *
 * Return: pointer to s
 */
char *leet(char *s)
{
	int string_total_count, leet_total_count;
	char leet_characters[] = "aAeEoOtTlL";
	char leet_numbers[] = "4433007711";

	string_total_count = 0;
	while (s[string_total_count] != '\0')
	{
		leet_total_count = 0;
		while (leet_total_count < 10)
		{
			if (leet_characters[leet_total_count] == s[string_total_count])
			{
				s[string_total_count] = lee_numbers[leet_total_count];
			}
			leet_total_count++;
		}
		string_total_count++;
	}
	return (s);
}
