//2020.4.06.pm8:40, by Vivy Chen (Queen)
//FileIO
//read()
//ssize_t means type defined long 
// size_t means unsized long 
//ssize_t read(int fd, void *buf, size_t)

#include <unistd.h>

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

unsigned long buf;
unsigned long len;
ssize_t n_line;
int fd;

fd = open( "/Users/pintred/Desktop/report.png", O_RDONLY);

// read out bytes from fd and write in to w_line

n_line = read(fd, buf, len);

while ( len!=0 && n_line !=0 ) {

    if (n_line == -1){
        if(errno == EINTR)
            continue;
        perror("err");
        break;
    }

    len -= n_line;
    buf += n_line; 

}
