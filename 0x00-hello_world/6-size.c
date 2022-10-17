#include <stdio.h>

/**
* main - Prints out the size of c datatypes
* Alx has so many things that are not logical
* are we learing to copy codes or software
* engineering ? most working could couldn't
* run on your platform, due to a letter that
* couldn't affect compilation or execution.
* it needs some amendment.
* Return: All good
*/

int main(void)
{
	printf("Size of a char: %li byte(s)\n", sizeof(char));
	printf("Size of an int: %li byte(s)\n", sizeof(int));
	printf("Size of a long int: %li byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %li byte(s)\n", sizeof(long long int));
	printf("Size of a float: %li byte(s)\n", sizeof(float));
	return (0);
}
