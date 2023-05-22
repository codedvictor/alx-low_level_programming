#include <stdio.h>
#include <math.h>

/*
 *
 */
int add(int a, int b);
int mul(int a, int b);
int sub(int a, int b);
int div(int a, int b);
int mod(int a, int b);

int add(int a, int b)
{
	return (a + b);
}
int mul(int a, int b)
{
	return (a * b);
}
int sub(int a, int b)
{
	return((a) - (b));
}
int div(int a, int b)
{
	return ((a) / (b));
}
int mod(int a, int b)
{
	return ((a) % (b));
}
int main(void)
{
        int a, b;

        return (add(a, b));
        return (mul(a, b));
        return (sub(a, b));
        return (div(a, b));
        return (mod(a, b));
}
