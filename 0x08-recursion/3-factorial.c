#include "main.h"
#include <math.h>

/**
 * factorial - returns the factorial of a given number.
 * @n: input number.
 * Return: factorial of the number.
 */

int factorial(int n)
{
if (n < 0) /*Base condition*/
return (-1);

else if (n == 0) /*Base condition*/
return (1);
else
printf("%d\n", r);
return (n * factorial(n - 1)); /*Recursiv call*/
}
