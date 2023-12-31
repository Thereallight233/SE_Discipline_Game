TASK3
======

DISCUSS COMMON PITFALLS OR ERRORS ASSOCIATED WITH POINTERS AND STRATEGIES TO AVOID THEM

1.UNITIALIZED POINTERS:
=======================

Pitfall:
-----------

Using a pointer without initializing it can result in undefined behavior.

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


2.DANGLING POINTERS
------------------

PITFALL
----

Dangling pointers point to a memory location that has been
deallocated or is otherwise invalid. Accessing or dereferencing a dangling
pointer can lead to undefined behavior, crashes, or unexpected results.
Dangling pointers often occur when a pointer continues to exist after the
memory it points to has been released.


int *ptr = (int *)malloc(sizeof(int));

free(ptr); // Deallocate the memory

// Now, ptr is a dangling pointer
*ptr = 42; //


AVOIDANCE STRATEGY
-

Set pointers to 'NULL' after freeing the memory, and also avoid using pointers
after they are no longer valid.


free(ptr);

ptr = NULL; // this prevents the pointer from being a dangling pointer




3.MEMORY LEAKS
================


PITFALL
-------


Memory leaks happen when a program uses memory but forgets to give it back.
If this keeps happening, the program's memory usage grows, leading to possible
performance problems or crashes.



#include <stdlib.h>


int main()


{


	int *ptr = (int *)malloc(sizeof(int));


	// Operations with ptr


	return 0;

}


AVOIDANCE STRATEGY
-


a. Always Free Dynamically Allocated Memory:
---------------------------------------

Ensure that memory allocated using functions like malloc is always freed using
'free' when it is no longer needed


int *ptr = (int *)malloc(sizeof(int));


// Operations with ptr


free(ptr); // Deallocate the memory when done



b. Set Pointers to 'NULL' after Deallocation
--------------------------------------------


int *ptr = (int *)malloc(sizeof(int));

// Operations with ptr

free(ptr); // Deallocate the memory

ptr = NULL; // Nullify the pointer to avoid using it accidentally


















