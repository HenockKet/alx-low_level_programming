/**
 * swap_int - swaps values of two integers
 * @a: firet integer
 * @b: second integer
 * Return: has no return
 */
void swap_int(int *a, int *b)
{
int ab;

ab = *a;
*a = *b;
*b = ab;
}
