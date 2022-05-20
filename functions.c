#include <stdarg.h>
#include <unistd.h>
#include <stdarg.h>
#include "main.h"
/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
* print_number - prints an integer
* @n: integer to be printed
*
* Return: void
*/

void print_number(int n)
{
unsigned int i = n;

if (n < 0)
{
	_putchar('-');
	i = -n;
}

if ((i / 10) > 0)
{
	print_number(i / 10);
}

_putchar((i % 10) + '0');

return;
}

/**
* print_char - Prints a char.
* @arg: A list of arguments pointing to
*       the character to be printed.
*/
void print_char(va_list ap)
{
	char letter;

	letter = va_arg(ap, int);
	_putchar(letter);
}

/**
 * print_int - Prints an int.
 * @arg: A list of arguments pointing to
 *       the integer to be printed.
 */
void print_int(va_list ap)
{
	int num;

	num = va_arg(ap, int);
	print_number(num);
}

void print_string(va_list ap)
{
	char *str;
	int index;
	
	str = va_arg(ap, char *);
	if (str != NULL)
	{
		for (index = 0; str[index]; index++)
		{
			_putchar(str[index]);
		}
	}
}
