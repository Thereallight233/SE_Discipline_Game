### POINTERS

For this week, I have been assigned the concept pointers.
And along with it, is a couple of tasks.

Task 1:
=======
Write a short program in your preferred language illustrating the use of pointers to manipulate the value of a variable(for this I will be using c)


Task 2:
=======
Explain the concept of pointer arithmetic and provide a simple example to demonstrate its application.

Pointer Arithmetic is the set of valid arithmetic operations that can be
performed on pointers. The pointer variables store the memory address of
another variable. It doesn’t store any value.

Pointer Arithmetic(Addition)
============================

#include <stdio.h>

int main() {
    int a[] = {11, 25, 61, 18, 2};
    int *p = a; // p points to the first element of the array

    // Using pointer arithmetic to iterate through the array
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i + 1, *p);
        ptr++; // move the pointer to the next element
    }

    return 0;
}













Task 3:
=======
Discuss common pitfalls or errors associated with pointers and suggest strategies to avoid them.

