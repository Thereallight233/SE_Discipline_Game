TASK3
======

DISCUSS COMMON PITFALLS OR ERRORS ASSOCIATED WITH POINTERS AND STRATEGIES TO AVOID THEM

Uninitialized Pointers:
=======================

Pitfall: Using a pointer without initializing it can result in undefined behavior.

#include <stdio.h>

int main()
{
    // Uninitialized pointer

	int *p;

    // Attempting to dereference the unitialized pointer
    *p = 20;// this is going to lead to segementation fault

    printf("%d\n", *p);// More undefiend behavior

    return 0;
}

Avoidance Strategy:
===================

Always initialize pointers to NULL or a valid memory address before using them. Avoid using uninitialized pointers.

#include <stdio.h>

int main()
{
    // Initialized pointer

	int *ptr = NULL;  // Initialize to NULL or a valid memory address

    // Checking for NULL before dereferencing
    if (ptr != NULL) {
        *ptr = 42;
        printf("%d\n", *ptr);
    } else {
        printf("Pointer is NULL\n");
    }

    return 0;
}

TO BE CONTINUED...
