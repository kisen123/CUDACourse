#include <stdio.h>

// Examples for each conditional macro
// #if
// #ifdef
// #ifndef
// #elif
// #else
// #endif

#define PI 3.14159
#define AREA(r) (PI * r * r)

#ifndef radius
#define radius 7
#endif


// if elif else logic
// we can only use integer constants in #if and #elif
#if radius > 10
#define radius 10
#elif radius < 5
#define radius 5
#else 
#define radius 7
#endif


int main() {
    printf("Area of a circle with radius %d, %f\n", radius, AREA(radius));

    return 0;
}