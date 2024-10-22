// Key takeaways from this file
// 1. Initialize pointers to NULL when they don't point to valid data, yet.
// 2. Check pointers for Null before using to avoid crashes
// 3. NULL-checks allows for handling code gracefully


#include <stdio.h>
#include <stdlib.h>

int main() {

    // Initialize pointer to NULL
    int* ptr = NULL;
    printf("1. Initial ptr value: %p\n", (void*)ptr);

    // Check for NULL before using
    if (ptr == NULL) {
        printf("2. ptr is NULL, cannot dereference\n");
    }

    // Allocate memory
    ptr = malloc(sizeof(int));
    if (ptr == NULL) {
        printf("3. Memory allocation failed\n");

        // Here we should exit the program because the memory allocation didn't work, if that ever is to happen
        return 1;
    }

}