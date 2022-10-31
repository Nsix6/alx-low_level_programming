#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area
 *
 * @s: pointer to memory to be filled
 * @c: char to fill memory area
 * @n: number of bytes to be filled
 *
 * Return: pointer to be filled 
 */

void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value =c;
	
	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}

