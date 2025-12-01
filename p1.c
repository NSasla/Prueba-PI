#include <stdio.h>
#include <stdlib.h>

void printVec(int *vec, size_t dim){
    for(int i = 0; i < dim; i++){
        printf("%d .", vec[i]);
    }
    puts("..");
}

//Mensaje random

int maint(void){
    printf("Hello world!");
    int vec[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    printvec(vec, 10);
}
