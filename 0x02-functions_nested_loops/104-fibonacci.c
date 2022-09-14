#include <stdio.h>
/**
 * main - main block
 * Description: Find and print the first 98 fib numbers starting with 1 and 2.
 * Numbers should be coma and space separated.
 * Return: 0
 */
int main(void)
{
int count;
unsigned long i, j, k;
unsigned long m, n, p, carry;

count = 0;
i = 0;
amount = 100;/*10^2*/
for (count = 1; count <= 91; count++)
{
k = i + j;
i = j;
j = k;
printf("%lu, ", k);
}
m = i % amount;
i = i / amount;
n = j % amount;
j = j / amount;
while (count <= 98)
{
carry = (m + n) / amount;
p = (m + n) -carry * amount;
k = (i + j) +carry;
m = n;
n = p;
i = j;
j = k;
if (p >= 100)
printf("%lu%lu", k, p);
else
printf("%lu0%lu", k, p);
if (count != 98)
printf(", ");
count++;
}
putchar('\n');
return (0);
}
