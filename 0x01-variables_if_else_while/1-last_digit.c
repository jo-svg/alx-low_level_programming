/*
 * This program generates a random integer between -RAND_MAX/2 and RAND_MAX/2
 * and then prints a message indicating whether the number is greater than 5,
 * equal to 0, or less than 6 but not 0. 
 */
#include <stdlib.h> 
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* more headers goes there */

/*
 * main - Entry point. Generates a random integer and prints a message
 *        indicating whether the number is greater than 5, equal to 0,
 *        or less than 6 but not 0.
 *
 * Return: Always 0 (Success)
 */

 int main(void)
 {
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (n > 5)
	{
		print f("%d is greater than 5\n", n);
	}
	else if (n == 0) 
	{
		printf("%d is zero\n", n);
	}
	else
	{
		print f("%d is less than 6 and not 0\n", n);
	}
	return (0);
}
