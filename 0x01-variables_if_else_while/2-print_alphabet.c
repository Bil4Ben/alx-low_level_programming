#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
* main - converts upper case letters
* into lower case using string library.
* Return: nothing
*/

int main(void)
{
	char *str = "Alx MUST CONSIDER PROGRAMMER RIGHT";
	int i = 0;

	for (i; i < strlen(str); ++i)
	printf("%c", tolower((unsigned char)) str[i]));
	printf("\n")

return (0);
}
