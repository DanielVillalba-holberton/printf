#include "holberton.h"

/**
 *rpu - recursive printing int.
 *@x: unsigned int number to print
 *@BASE: base for the printing
 *Return: Number of  printed numbers.
*/
int rpu(int x, int BASE)
{
	char c;
	int i = 0, sign = 0;
	char *ctable = "0123456789ABCDEF";

	if (x < 0)
	{
		sign = 1;
		x = (-1) * x;
		i++;
	}
	if (sign == 1)
		_putchar('-');
	if (x)
	{
		c = ctable[x % BASE];
		i++;
		i += (rpu(x / BASE, BASE));
		_putchar(c);
	}
	return (i);
}

/**
 *rpuH - recursive printing unsigned hexadecimal.
 *@x: unsigned int number to print
 *@BASE: base for the printing
 *Return: Number of  printed numbers.
*/
int rpuH(unsigned int x, int BASE)
{
	char c;
	int i = 0;
	char *ctable = "0123456789ABCDEF";

	if (x)
	{
		c = ctable[x % BASE];
		i++;
		i += rpuH(x / BASE, BASE);
		_putchar(c);
	}
	return (i);
}


/**
 *rpup - recursive printing adress.
 *@x: unsigned int number to print
 *@BASE: base for the printing
 *Return: Number of  printed numbers.
*/
int rpup(unsigned long int x, int BASE)
{
	char c;
	int i = 0;
	char *ctable = "0123456789abcdef";

	if (x)
	{
		c = ctable[x % BASE];
		i++;
		i += (rpup(x / BASE, BASE));
		_putchar(c);
	}
	return (i);
}

/**
 *rpub - recursive printing binary usigned int.
 *@x: unsigned int number to print
 *@BASE: base for the printing
 *Return: Number of  printed numbers.
*/
int rpub(unsigned long int  x, int BASE)
{
	char c;
	int i = 0;
	char *ctable = "0123456789ABCDEF";


	if (x)
	{
		c = ctable[x % BASE];
		i++;
		i += (rpub(x / BASE, BASE));
		_putchar(c);
	}
	return (i);
}

/**
 *rpuu - recursive printing unsigned hexadecimal upper.
 *@x: unsigned int number to print
 *@BASE: base for the printing
 *Return: Number of  printed numbers.
*/

int rpuu(unsigned int x, int BASE)
{
	char c;
	int i = 0;
	char ct[] = {"0123456789abcdef"};

	if (x)
	{
		c = ct[x % BASE];
		i++;
		i += rpuu(x / BASE, BASE);
		_putchar(c);
	}
	if (x > UINT_MAX)
	{
		i++;
		_putchar('0');
	}

	return (i);
}
