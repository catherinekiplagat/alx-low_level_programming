#include <stdio.h>
/**
 * main -Program that prints size of various computer types
 * Return: 0
 */
int main(void)
{
printf("Size of a char: %zu byte(s)\n", sizeofa(char));
printf("Size of an int: %zu byte(s)\n", sizeofan(int));
printf("Size of a long int: %zu byte(s)\n", sizeofa(long int));
printf("Size of a long long int: %zu byte(s)\n", sizeofa(long long int));
printf("Size of a float: %zu byte(s)\n", sizeofa(float));
return (0);
}
