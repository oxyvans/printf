#include "main.h"

/**
 * print_number - Entry point
 * @n : int
 *
 */

void print_number(int n)
{
	unsigned int i = n;
	
	if (n < 0)
	{
		_putchar('-');
		i = -n;
	}

	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar((i % 10) + '0');
}

/**
 * print_i - print i
 * @i : int
 * Return: strlen
 */

int print_i(va_list i)
{
	int n = va_arg(i, int), cont = 1;

	print_number(n);
			
	if (n < 0)
		cont++;
	while (n / 10 != 0)
	{
		cont++;
		n = n / 10;
	}

	return (cont);
}

/**
 * print_d - print d
 * @d : decmal
 * Return: strlen
 */

int print_d(va_list d)
{
	int n = va_arg(d, int);
	int cont = 1;

        print_number(n);
	
	if (n < 0)
                cont++;
        while (n / 10 != 0)
        {
                cont++;
                n = n / 10;
        }

        return (cont);
}


/**
 * print_number_u - Entry point
 * @n : int
 *
 */

void print_number_u(int n)
{
        unsigned int i = n;

        if (i / 10)
                print_number_u(i / 10);

        _putchar((i % 10) + '0');
}

/**
 * print_u - print u
 * @u : unsigned
 * Return: strlen
 */

int print_u(va_list u)
{
	int n = va_arg(u, int), cont = 1;

   	print_number_u(n);

	 while (n / 10 != 0)
        {
                cont++;
                n = n / 10;
        }

        return (cont);

}

/**
 * print_b - print b
 * @b : binario
 * Return: strlen
 */

int print_b(va_list b)
{
	int n = va_arg(b, int);
	int a[22];
	int i = 0, cont = 0;

	for(i = 0; n > 0; i++)
	{
		a[i] = n % 2;
		n = n / 2;
		cont++;
	}
	
	for(i -= 1; i >= 0; i--)
	{
		_putchar(a[i] + '0');
	}
	return (cont);
}

/**
 * print_o - print o
 * @o : octal
 * Return: strlen
 */

int print_o(va_list o)
{

	unsigned int n = va_arg(o, int);
        int a[11];
        int i = 0, cont = 0;

        for(i = 0; n > 0; i++)
        {
                a[i] = n % 8;
                n = n / 8;
                cont++;
        }

        for(i -= 1; i >= 0; i--)
        {
                _putchar(a[i] + '0');
        }
        return (cont);
}

/**
 * print_x - print x
 * @x : hexadecimal
 * Return: strlen
 */

int print_x(va_list x)
{
	char hexa[] = "0123456789abcdef";
        unsigned int n = va_arg(x, unsigned int);
        int a[8];
        int i = 0, cont = 0;

        for(i = 0; n > 0; i++)
        {
                a[i] = n % 16;
                n = n / 16;
                cont++;
        }

        for(i -= 1; i >= 0; i--)
        {
                _putchar(hexa[a[i]]);
        }
        return (cont);
}

/**
 * print_X - print X
 * @X : hexadecimal
 * Return: strlen
 */

int print_X(va_list X)
{
        char hexa[] = "0123456789ABCDEF";
        unsigned long int n = va_arg(X, unsigned long int);
        int a[8];
        int i = 0, cont = 0;

        for(i = 0; n > 0; i++)
        {
                a[i] = n % 16;
                n = n / 16;
                cont++;
        }

        for(i -= 1; i >= 0; i--)
        {
                _putchar(hexa[a[i]]);
        }
        return (cont);
}




/**
 * print_p - print p
 * @p : addres
 * Return: strlen
 */

int print_p(va_list p)
{
        char hexa[] = "0123456789abcdef";
        unsigned long int n = va_arg(p, unsigned long int);
        int a[20];
        int i = 0, cont = 0;

	_putchar('0');
	_putchar('x');
	cont += 2;
        for(i = 0; n > 0; i++)
        {
                a[i] = n % 16;
                n = n / 16;
                cont++;
        }

        for(i -= 1; i >= 0; i--)
        {
                _putchar(hexa[a[i]]);
        }
        return (cont);
}
