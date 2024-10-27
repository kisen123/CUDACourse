#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <cuda_runtime.h>

#define N 10000000  // Vector size = 10 million
#define BLOCK_SIZE 256

// Example:
// A = [1, 2, 3, 4, 5]
// B = [6, 7, 8, 9, 10]
// C = A + B = [7, 9, 11, 13, 15]

// CPU vector addition - COMPLETE
void vector_add_cpu(float *a, float *b, float *c, int n) {
    for (int i = 0; i < n; i++) {
        c[i] = a[i] + b[i];
    }
}

// CUDA kernel for vector addition
__global__ void vector_add_gpu(float *a, float *b, float *c, int n) {
    
}

// Initialize vector with random float values - COMPLETE
void init_vector(float* vec, int n) {
    for (int i = 0; i < n; i++) {
        vec[i] = (float)rand() / RAND_MAX; // RAND_MAX is contained in the stdlib.h file. vec will be between 0 and 1
    }
}

// Function to measure execution time
double get_time() {
    
}


int main() {


    float *h_a, *h_b, *h_c_cpu, *h_c_gpu;
    float *d_a, *d_b, *d_c;

    size_t size = N * sizeof(float);

    // We need to allocate the host memory
    // We also need to cast the result of malloc(size)
    // to be a pointer to a float type. That is why it says (float*)
    h_a = (float*)malloc(size);
    h_b = (float*)malloc(size);
    h_c_cpu = (float*)malloc(size);
    h_c_gpu = (float*)malloc(size);

    // Initialize all the vectors
    srand(time(NULL));
    init_vector(h_a, N);
    init_vector(h_b, N);



    return 0;
}