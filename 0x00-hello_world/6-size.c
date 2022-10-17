#include <stdio.h>

/**
* main - It lists out built in data type size
* char, int, long int, long long int, and
* floating int data types. By the way alx
* training has some ways that are not
* logical. are we learning programming or
* copying? There must be freedom and logic for
* programming and software enginnering.
* Return: Nothing
*/
void main(void)
{
	printf("Size of a char: %li byte(s)\n", sizeof(char));
	printf("Size of an int: %li byte(s)\n", sizeof(int));
	printf("Size of a long int: %li byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %li byte(s)\n", sizeof(long long int));
	printf("Size of a float: %li byte(s)\n", sizeof(float));
	return (0);
}

/* Note!
* You should get something like this as an output
* which are the sizes of the built in data types in C
Size of a char: 1 byte(s) which is 8 bits, example is letter a
Size of an int: 4 byte(s)
Size of a long int: 8 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
 */
