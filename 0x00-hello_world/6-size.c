#include <stdio.h>

/**
* main - It lists out built in data type size
* char, int, long int, long long int, and
* floating int data types
* Return: Nothing
*/
void main(void)
{
	printf("Memory size of char:%li byte\n", sizeof(char));
	printf("Memory size of int:%li bytes\n", sizeof(int));
	printf("Memory size of long int:%li bytes\n", sizeof(long int));
	printf("Memory size long long int:%li bytes\n", sizeof(long long int));
	printf("Memory size of float:%li bytes\n", sizeof(float));
	return (0);
}
