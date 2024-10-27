// This is just a playground for C++ code:
#include <iostream>
#include <stdlib.h>
using namespace std;



#define N 10


void vector_add_cpu(float* vec, int n) {
    for (int i = 0; i < n; i++) {
        vec[i] = (float)rand() / RAND_MAX;
        cout << "Added " << vec[i] << " to the vector" << endl;
    }
}


int main() {

    // We have to allocate memory to make room for vec to exist
    float* vec;
    size_t size = N * sizeof(float);
    vec = (float*)malloc(size);

    vector_add_cpu(vec, N);



    return 0;
}