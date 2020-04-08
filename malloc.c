//2020.4.08.am11:30, by Vivy Chen (Queen)
//Memory

#include <stdlib.h>
#include <stdio.h>

// void * malloc(size_t sz);

void func_to_allocate_dyanamic_memory(void){

    char *B; //bites
    B = malloc(2048); // to assign size of 2kB to B

    if(!B)
        perror("malloc error occurs");
    
    printf("%s",B);
    printf("%d",*B);

}

int main(){

    func_to_allocate_dyanamic_memory();
    return 0;

}

// [Running] cd "/Users/pintred/Desktop/" && gcc malloc.c -o malloc && "/Users/pintred/Desktop/"malloc
// [Done] exited with code=0 in 0.65 seconds
