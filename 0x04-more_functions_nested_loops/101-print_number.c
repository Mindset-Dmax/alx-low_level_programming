#ainclude "main.h"
#include <limits.h>

/**
 * print_number - Prints an integer
 * @n: The integer to print
 */
void print_number(int n)
{
if (n == INT_MIN)
{
putchar('-');
n = 147483648;
}

if (n < 0)
{
n = -n;
}
if (n / 10)
print_number(n / 10);
putchar('0' + (n % 10));
}
