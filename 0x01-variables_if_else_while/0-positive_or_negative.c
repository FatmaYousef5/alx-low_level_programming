#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Descriptio: output randon no and determine if it is positive or negative
 *
 * Return: 0(success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i positive no\n", n);
	else if (n == 0)
                printf("%i zero\n", n);
	else
	        printf("%i negative no\n", n);
	return (0);
}
