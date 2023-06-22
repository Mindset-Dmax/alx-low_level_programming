#include "main.h"

/**
 * print_alphabet - Entry point
 * The arrangement of a to z
 * Return: Always 0
 */

void print_alphabet(void)
{

	char alp = 'a';

		while (alp <= 'z')

		{
			_putchar(alp);
			alp++;
		}

		_putchar('\n');

}
