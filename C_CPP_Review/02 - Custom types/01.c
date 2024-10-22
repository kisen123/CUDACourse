

#include <stdio.h> // For use of printf
#include <stdlib.h>


int main() {

    int arr[] = {12, 24, 36, 48, 60};

    // sizeof() returns the size of arr in bytes, in order to get 
    // the number of elements, we divide the size the entire thing takes up, 
    // with the size that one element takes up.
    size_t size = sizeof(arr) / sizeof(arr[0]);


    
    printf("The size of the array is: %zu\n", size);
    printf("size_t takes up %zu bytes\n", sizeof(size_t));
    printf("int takes up %zu bytes\n", sizeof(int));

    return 0;

}