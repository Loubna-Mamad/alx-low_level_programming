#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Last digit
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lastDigitgit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (lastDigit > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, lastDigit);
	else if (lastDigit == 0)
		printf("Last digit of %i is %i and is 0\n", n, lastDigit);
	else if (lastDigit < 6 && lastDigit !0)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, lastDigit);
	return (0);
}