#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 * main - main block
 * Description: Get a rondom number and print 
 * if it is positive or negative or zero
 * Return: 0
 */


int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;
					if (n >0)
					{
						printf("%d is positive\n", n);
					}
					else if (n<0)
					{
						printf("the %d is negative",n);
					}
					else 
						printf("%d is zero\n", n);
					

					return (0);

}
