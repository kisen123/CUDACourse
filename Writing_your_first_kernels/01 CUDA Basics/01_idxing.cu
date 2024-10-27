#include <stdio.h>

__global__ void whoami(void) {
    int block_id = 
        blockIdx.x + 
        blockIdx.y * gridDim.x +
        blockIdx.z * gridDim.x * gridDim.y;

    int block_offset = 
        block_id *
        blockDim.x * blockDim.y * blockDim.z;

    int thread_offset =
        threadIdx.x + 
        threadIdx.y * blockDim.x + 
        threadIdx.z * blockDim.x * blockDim.y;

    int id = block_offset + thread_offset;


    printf("%04d | Block(%d %d %d) = %3d | Thread(%d %d %d) = %3d\n",
        id,
        blockIdx.x, blockIdx.y, blockIdx.z, block_id,
        threadIdx.x, threadIdx.y, threadIdx.z, thread_offset);
    // printf("blockIdx.x: %d, blockIdx.y: %d, blockIdx.z: %d, threadIdx.x: %d, threadIdx.y: %d, threadIdx.z: %d\n", blockIdx.x, blockIdx.y, blockIdx.z, threadIdx.x, threadIdx.y, threadIdx.z);

}



int main(int argc, char **argv) {
    const int b_x = 2, b_y = 3, b_z = 4;
    const int t_x = 4, t_y = 4, t_z = 4;


    int blocks_per_grid = b_x * b_y * b_z;
    int threads_per_block = t_x * t_y * t_z;

    printf("%d blocks per grid\n", blocks_per_grid);
    printf("%d threads per block\n", threads_per_block);
    printf("%d total threads\n", blocks_per_grid * threads_per_block);

    dim3 blocksPerGrid(b_x, b_y, b_z); // 3D Cube of shape 2*3*4 = 24
    dim3 threadsPerBlock(t_x, t_y, t_z); // 3D Cube of shape 4*4*4 = 64

    // We need this special syntax to input how many blocks there are per grid, and how many threads there are per block
    whoami<<<blocksPerGrid, threadsPerBlock>>>();
    cudaDeviceSynchronize();
}