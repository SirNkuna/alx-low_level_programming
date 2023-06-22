#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10:
	if (m > 6)
		printf("last digit of %d is %d and is greater than 5\n", n, m);
	if (m == (0)
			printf("last digit od %d is %d and is 0\n", n, m);
	if (m < 6 && m != 0)
	                printf("last digit of %d is %Dand less than 6 and 0\n", n, m);
	return (0);
}
