#include "main.h"

/* betty style doc for function main goes there */
/**
 * _strstr -entry function
 * finds the first occurrence of the substring needle in the string haystack.
 * The terminating null bytes (\0) are not compared.
 * @haystack: string of interest
 * @needle: substring.
 * Return: a pointer to the beginning of the located substring, or NULL
 * if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *hptr = haystack;
	char *nptr = needle;
	int cnt = 0;
	int i = 0;
	char *cntn = needle;

	while (*cntn != '\0')
	{
		cnt++;
		cntn++;
	}


	while (*hptr != '\0')
	{
		if (*hptr == *nptr)
		{
			while (*nptr != '\0')
			{
				if (*nptr != *hptr)
				{
					nptr = needle;
					i = 0;
					break;
				}
				i++;
				nptr++;
				hptr++;
			}
		}

		if (i != 0)
			return (hptr - cnt);
		hptr++;
	}
	if (i != 0)
		return (hptr - cnt);
	return (0);
}
