#include<stdio.h>
/**
 * main : this is the main function
 * print the size of a char
 * print the size of an int
 * print the size of a long int
 * print the size of a long long int
 * print the size of a float
 * Return 0 : when it's true
 */
int main(void)
{
	printf("Size of a char: %lu  byte(s)", sizeof(char));
	printf("Size of an int: %lu byte(s)", sizeof(int));
	printf("Size of a long int: %lu byte(s)", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)", sizeof(long long int));
	printf("Size of a float: %lu byte(s)", sizeof(float));
	return (0);
}
