#include "main.h"

/**
* main - Prints "_putchar" characters
* on standard output
* Return: Noting
*/
int main(void)
{
	char *s = "_putchar";

	for (int i = 0; i < 8; i++)
		{
		_putchar(s[i]);
		}
	_putchar('\n');
return (0);
}
