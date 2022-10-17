#include <stdio.h>
/**
* main - It lists out built in data type size
* char, short int, unsigned int, byte, floating
* unsigned long int data types
* Return: Nothing
*/
void main(void)
{
	printf("char Memory size:%li byte\n", sizeof(char));
	printf("short int Memory:%li bytes\n", sizeof(short int));
	printf("unsigned short int Memory:%li bytes\n", sizeof(unsigned short int));
	printf("unsigned int Memory size:%li bytes\n", sizeof(unsigned int));
	printf("byte is Memory size:%li bytes\n", sizeof(double));
	printf("float is Memory size:%li bytes\n", sizeof(float));
	printf("unsigned long int Memory:%li bytes\n", sizeof(unsigned long int));
return (0);
}
