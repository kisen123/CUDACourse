#include <stdio.h>

int main() {
    float f = 69.69;
    
    // Casting f into an int, output will then be 69, .69 will be truncated
    int i = (int)f;
    printf("%d\n", i);

    // Casting the int into a character. But since i was an integer, it will be cast into its ASCII equivalent
    // which is a big E in this case
    char c = (char)i; 
    printf("%c\n", c);


    return 0;

}