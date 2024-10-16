#include <stdio.h> // For use of printf

int main() {
    int num = 10;
    float fnum = 3.14;

    // We create a void pointer, i.e. a pointer that points to a void-type
    void* vptr;
    vptr = &num;

    // We do a little trick inside the printf-statement here
    // We cast vptr to be a pointer that points to an int-type instead, and THEN dereference that to get the value
    printf("Integer: %d\n", *(int*)vptr);

    vptr = &fnum;
    printf("Float: %f\n", *(float*)vptr);




    // Generally, void pointers are used when we don't necessarily know what data type we are working with.

}