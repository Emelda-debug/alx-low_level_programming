#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add- returns the sum of a and b
 * @a: first operand
 * @b: second operand
 * Return: sum of a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub- returns the difference of a and b
 * @a: first operand
 * @b: second operand
 * Return: difference between a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 *  op_mul- returns the product of a and b
 *  @a: first operand
 *  @b: second operand
 *  Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div- result of the division of a by b
 * @a: first operand
 * @b: second operand
 * Result: result of dividing a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod- remainder of the division of a by b
 * @a: first operand
 * @b: second operand
 * Return: result of a modulus b
 */
int op_mod(int a, int b)
{
	return (a % b);
}

