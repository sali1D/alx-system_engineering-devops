#include "main.h"
/**
 * more_numbers - printing 10 times numbers from 0 to 14
 * Return: returning nothing
 */
void more_numbers(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar('1');
			}
			_putchar((j % 10) + '0');
		}
		_putchar('\n');

	}
}
