#ifndef AUX_H
#define AUX_H

    #include <stdio.h> 
    #include <string.h>
    #include <stdlib.h>

    void print(int* v, int n);
    int* copy(char * m);
    int* new(int n);
    int * random_vector_unique_elems(int n);
    void shuffle(int *v, int ini, int fim);
    void swap(int* v, int i, int j);

    

    
#endif