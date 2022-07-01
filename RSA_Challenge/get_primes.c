#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int primes[100000], pos = 1, i = 0, num = 2, end = 5;
	primes[0] = 2;
	
	end = atoi(argv[1]);
	
	while(pos < end)
	{
		i = 0;
		num++;
		while(i <= pos)
		{
			if (i == pos)
			{
				primes[pos] = num;
				
				pos++;
			}
			else if (num % primes[i] == 0)
			break;
			else
			i++;
		}
	}
	
	for (i = 0; i < pos; i++)
	printf("%d\n", primes[i]);
}
