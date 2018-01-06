/*
 * fibo.c
 *
 *  Created on: Jan 6, 2018
 */

#include <stdio.h>

void fibo(int n)
{
	int i;
	int fibo = 1;
	int fibm1 = 1;
	int fibm2 = 1;

	printf("%i %i ", fibm2, fibm1);
	for (i = 0; i <= n - 3; i++)
	{
		fibm2 = fibm1;
		fibm1 = fibo;
		fibo = fibm2 + fibm1;
		printf("%i ", fibo);
	}
	printf("\n");

}
