#include <stdio.h>
/**
 * main - Prints the sum of all multiples of 3 and 5 up to 1024
 * Return: always (Success)
 */

int main(void)

{
	int i, z = 0;

	while (i < 10240
	{
	if ((i % 3 == 0) || (i % 5 == 0))
	{
	z += i;
	}
	i++;
	}
	printf("%d\n", z);
	return (0);
}
