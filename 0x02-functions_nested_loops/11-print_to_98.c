 #include "main.h"


/**
*main - check the code for ALX School students.
*Return: Always 0.
*/
void print_to_98(int n)
n=0;
if (n >=98)
{
	while (n > 98)
		printf ("%d, ", n--);
	printf("%d\n", n);
}

else 
{
	while (n < 98)
		printf ("%d, ", n++);
	printf("%d\n", n);
}
