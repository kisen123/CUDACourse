#include <stdio.h> // For use of printf

int main() {
    
    // Initializing an array of integers
    int arr[] = {12, 24, 36, 48, 60};

    // Making ptr, which is a pointer that points to the integer type, and stores the first address in the variable arr
    int* ptr = arr;

    printf("Initial value: %d\n", *ptr);


    // We iterate through the arr-variable, by incrementing the pointer position with ++
    for (int i=0; i < 5; i++) {
        printf("%d\t ", *ptr);
        printf("%p\t", ptr);
        printf("%p\n", &ptr);
        ptr++;
    }

}