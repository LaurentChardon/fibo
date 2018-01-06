/*
 * main.c
 *
 *  Created on: Jan 6, 2018
 */

#include <stdio.h>

void fibo(int);

int main(int argc, char **argv)
{
	int order = 10;

	printf("Calculating Fibonacci sequence of order %i\n", order);
	fibo(order);

	return 0;
}
