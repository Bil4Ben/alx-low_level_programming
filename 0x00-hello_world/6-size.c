#include <stdio.h>

/**
* main - It lists out built in data type size
* char, int, long int, long long int, and
* floating int data types
* Return: Nothing
*/
void main(void)
{
	printf("Size of char: %li byte(s)\n", sizeof(char));
	printf("Size of int: %li bytes(s)\n", sizeof(int));
	printf("Size of long int: %li bytes(s)\n", sizeof(long int));
	printf("Size of long long int: %li bytes(s)\n", sizeof(long long int));
	printf("Size of float: %li bytes(s)\n", sizeof(float));
	return (0);
}
