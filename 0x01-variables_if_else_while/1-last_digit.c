#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print the last digit of a randomly generated number
 * and whether it is greater than 0, less than 0. or 0.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %i is %i and is ", n, (n % 10));
	if ((n % 10) > 5)
	{
		printf("greater than 5\n");
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("less than 6 and not 0\n");
	}
	else
	{
		printf("0\n");
	}
	return (0);
}


