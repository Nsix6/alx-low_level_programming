#include "main.h"
#include <unistd.h>

/***
 * _putchar - outputs char c to sdout
 * @c: the chracter to print
 *
 * Return: On success 1
 */
int _putchar(char c)
{
	return (write(1,&c, 1));
}
