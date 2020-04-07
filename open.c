//2020.4.06.pm8:20, by Vivy Chen (Queen)
//FileIO
//open()
// int open (const char *name, int flags);
// int open (const char *name, int flags, mode_t mode);

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int funcQ(){

    int fd = open("/Users/pintred/Desktop/bus_schedule.png ",O_RDONLY);

    if(fd == -1) {
        printf("error occurs.");
    }
    
    return 0;
}

int main(){

    int result;
    result = funcQ();
    printf("%d", result);
    return result;

}

// [Running] cd "/Users/pintred/Desktop/" && gcc open.c -o open && "/Users/pintred/Desktop/"open
// open.c:20:1: warning: control reaches end of non-void function [-Wreturn-type]
// }
// ^
// 1 warning generated.
// error occurs.0
// [Done] exited with code=0 in 0.428 seconds
