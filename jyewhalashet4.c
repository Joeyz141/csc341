//Joseph Yewhalashet
//CSC-341
//Sample Pointer Program

#include <stdio.h>
#include <stdlib.h>

// Uninitialized global variable (placed in BSS segment)
int uninitialized_global;

// Initialized global variable (placed in Data segment)
int initialized_global = 15;

int main(int argc, char *argv[]) {
    // Stack variable
    int stack_var = 20;

    // Heap variable (dynamically allocated memory)
    int *heap_var = (int *)malloc(sizeof(int));

    // Print memory addresses of different variables
    printf("Address of argc:               %p\n", (void*)&argc);
    printf("Address of stack_var:          %p\n", (void*)&stack_var);
    printf("Address of heap_var (malloc):  %p\n", (void*)heap_var);
    printf("Address of uninitialized_global: %p\n", (void*)&uninitialized_global);
    printf("Address of initialized_global: %p\n", (void*)&initialized_global);

    // Free dynamically allocated memory
    free(heap_var);

    return 0;
}

