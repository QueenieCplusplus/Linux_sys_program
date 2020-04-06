//2020.4.06.pm8:40, by Vivy Chen (Queen)
//FileStream
//rewind() functions as samas fseek()

#include <stdio.h>

// void rewind(FILE *stream);

void funcQ(){
    int errno = 0;
    rewind(stream);
    if (errno){
        printf("error occurs");
    }
}

int main(){
    funcQ();
    return 0;
}