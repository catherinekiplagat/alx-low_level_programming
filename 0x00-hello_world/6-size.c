#include <stdio.h>
/**
 * main -Program that prints size of various computer types
 * Return: 0
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;

printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("size of int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("size of long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("size of long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("size of float: %lu byte(s)\n", (unsigned long)sizeof(f));

switch (sizeof"(void*)")
printf("32\n");
break;
printf("64\n");
break;
return (0);
}
