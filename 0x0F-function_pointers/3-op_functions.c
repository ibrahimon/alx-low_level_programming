#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - returns thr sum of a and b
 * @a: first int
 * @b: second int
 * Return: the sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the diffrence of a and b
 * @a: first int
 * @b: second b
 * Return: the differance
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of a and b
 * @a: first int
 * @b: second int
 * Return: the multiply
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of the division of a by b
 * @a: first int
 * @b: second int
 * Return: division result
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division
 * @a: first int
 * @b: second int
 * Return: the modul
 */

int op_mod(int a, int b)
{
	return (a % b);
}
