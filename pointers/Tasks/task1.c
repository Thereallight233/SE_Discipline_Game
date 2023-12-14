#include <stdio.h>

int main(void)
{
	int a = 5, b = 12;// we declare two integer variables 'a' and 'b' and
// initialize them with the values 5 and 12 respectively
	int *p, *q; // we declare two pointers (int *p, *q)

	p = &a, q = &b;// we initialize the pointers with the address of a and b
//using the address of operator '&'
	printf("a = %d and b = %d\n", a, b); //we printoriginal value of a and b
//respectively
	*p = 50, *q = 17; // we use the pointers p and q to manipulate the values
// of the variables a and b by dereferencing the pointers and assigning new
// values(*p = 50, *q = 17)
	printf("now a = %d and b = %d\n", a, b); // we print tne modified values of
// the variables.

	return (0);
}
