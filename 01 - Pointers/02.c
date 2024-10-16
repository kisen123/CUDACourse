#include <stdio.h> // For use of printf

int main() {
    int value = 42;
    int* ptr1 = &value;
    int** ptr2 = &ptr1;
    int*** ptr3 = &ptr2;

    // Triple deferencing the pointer to the pointer to the pointer, such that we return the value stored in 'value'
    printf("Value: %d\n", ***ptr3);
}