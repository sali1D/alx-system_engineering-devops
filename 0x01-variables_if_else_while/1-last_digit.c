#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - main function
 *
 * Return: returning 0
 */
int main(void)
{
	int n;
	int c;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	c = n % 10;
	if (c  > 5)
		printf("Last digit of %d is %d and is greater than 5", n, c);
	else if (c == 0)
		printf("Last digit of %d is %d and is 0", n, c);
	else if (c < 6 && c != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, c);
	printf("\n");
	return (0);
}
