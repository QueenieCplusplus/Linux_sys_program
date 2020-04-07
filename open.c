//2020.4.06.pm8:20, by Vivy Chen (Queen)
//FileIO
//open()
// int open (const char *name, int flags);
// int open (const char *name, int flags, mode_t mode);

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int fd = open("~/pintred/Desktop/MBTI/ＩＮＦＪ/INFJ.png",O_RDONLY);

if(fd == -1) {
    printf("error occurs.");
}


