/*
 * fibo.c
 *
 *  Created on: Jan 6, 2018
 */

#include <stdio.h>
#include <limits.h>

void fibo(int n)
{
	int i;
	int linesize=0;
	unsigned long long fibo = 1;
	unsigned long long fibm1 = 1;
	unsigned long long fibm2 = 1;

	linesize+=printf("%llu %llu ", fibm2, fibm1);
	for (i = 0; i <= n - 3; i++)
	{
		if (linesize > 70)
		{
			printf("\n");
			linesize=0;
		}
		fibm2 = fibm1;
		fibm1 = fibo;
		fibo = fibm2 + fibm1;
		linesize+=printf("%llu ", fibo);
		if ( fibo > (ULLONG_MAX/2LL) )
		{
#ifdef DEBUG
			printf("\nDEBUG: %llu - %llu = %llu\n",ULLONG_MAX,fibo,ULLONG_MAX-fibo);
#endif
			printf("\nMachine precision capability of %llu reached at sequence #%i.\nAborting\n",ULLONG_MAX, i+3);
			return;
		}
	}
	printf("\n");

}
