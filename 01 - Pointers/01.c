#include <stdio.h> //Importing standard input/output header file

// & is the "address of"-operator
// * is the "assign pointer to a type"/"dereferencing" operator


int main() {
    int x = 10;
    int* ptr = &x;  // ptr is a variable just like any other variable. 
                    // It's just that ptr happens to have the type int* instead of int, meaning it's mainly used for storing the address of an int named x

    printf("Address of x: 0x%p\n", ptr);
    printf("Value of x: %d\n", *ptr);
    // The operator * also works as a dereferencing operator


}