#include <stdio.h>

/**
* main - It lists out built in data type size
* char, int, long int, long long int, and
* floating int data types. By the way alx
* training has some ways that are not
* logical. are we learning programming or
* copying? There must be freedom for
* programming and software enginnering.
* Return: Nothing
*/
void main(void)
{
	printf("Size of char: %li byte(s)\n", sizeof(char));
	printf("Size of int: %li byte(s)\n", sizeof(int));
	printf("Size of long int: %li byte(s)\n", sizeof(long int));
	printf("Size of long long int: %li byte(s)\n", sizeof(long long int));
	printf("Size of float: %li byte(s)\n", sizeof(float));
	return (0);
}
