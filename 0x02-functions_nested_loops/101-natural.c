#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 1, sum = 0;
	while ((n * 3) < 1024)
	{
		if ((n * 5) < 1024)
		sum += n * 5;
		sum += n * 3;
		n++;
	}
	printf("%d\n", sum);
	return (0);
}
