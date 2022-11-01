#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area
 *
 * @s: pointer to memory to be filled
 * @c: char to fill memory area
 * @n: number of bytes to be filled
 * Return: pointer to be filled
 */
char _memset(char *s, char c, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = c;
		n--;
	}
	return (s);
}

