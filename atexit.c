//2020.4.07.pm9:00, by Vivy Chen (Queen)
//Process
//atexit() is as same as exit(), or just kill a process by Kernel
//other ways includes: SIGTERM || SIGKILL

#include <stdlib.h>
#include <stdio.h>

void funcVshowMsg(void){

    printf(" atexit() succeed");
}

int main(void){

    if (atexit(funcVshowMsg))
        fprintf(stderr, "call atexit() but error occurs.");

    return 0;

}


// [Running] cd "/Users/pintred/Desktop/" && gcc atexit.c -o atexit && "/Users/pintred/Desktop/"atexit
//  atexit() succeed
// [Done] exited with code=0 in 0.527 seconds

