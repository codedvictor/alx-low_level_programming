#include "main.h"
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main -Entry point
 *
 *
 * Return: 1 (Success) otherwise 0
 */

int main(void)
{
int i, j, k, j1, j2, k1, k2;
j = 1;
k = 2;
printf("%d", j);
for (i = 1; i < 91; i++)
{
printf(", %d", k);
k = k + j;
j = k - j;
}
j1 = j / 1000000000;
j2 = j % 1000000000;
k1 = k / 1000000000;
k2 = k % 1000000000;
for (i = 92; i < 99; ++i)
{
printf(", %d", k1 + (k2 / 1000000000));
printf("%d", k2 % 1000000000);
k1 = k1 + j1;
j1 = k1 - j1;
k2 = k2 + j2;
j2 = k2 - j2;
}
printf("\n");
return (0);
}
