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
j = 1;
for (count = 1; count <= 98; count++)
{
k = i + j;
i = j;
j = k;
printf("%lu, ", k);
}
m = i % 100;
i = i / 100;
n = j % 100;
j = j / 100;
while (count <= 98)
{
carry = (m + n) / 100;
p = (m + n) -carry * 100;
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
