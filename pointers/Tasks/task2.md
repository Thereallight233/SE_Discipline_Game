TASK2
=======
Explain the concept of pointer arithmetic and provide a simple example to demonstrate its app 14
Pointer Arithmetic is the set of valid arithmetic operations that can be
performed on pointers. The pointer variables store the memory address of
another variable. It doesn’t store any value.

Pointer Arithmetic(Addition)
============================
// A simple program that demonstrates the application of the addition pointer arithmetic

#include <stdio.h>

int main()
{
     int a[] = {11, 25, 61, 18, 2};

	int *p = a; // p points to the first element of the array

     // Using pointer arithmetic to iterate through the array
     for (int i = 0; i < 5; i++) {
         printf("Element %d: %d\n", i + 1, *p);
         ptr++; // move the pointer to the next element
     }
     return 0;
}
