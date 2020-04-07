//2020.4.07.pm5:30, by Vivy Chen (Queen)
//FileStream
//select() functions as samas poll()

#include <stdio.h>
#include <sys/time.h>
#include <sys/types.h>
#include <unistd.h>

#define TIMEOUT 5 //5sec
#define Buff_length 1024 //1024 bytes


int funcQ(void){

    struct timeval tv;
    fd_set readfds;
    int n_line;

    // wait for write in data from stdin
    FD_ZERO(&readfds);
    FD_SET(STDIN_FILENO, &readfds);
    
    // wait for 5 sec
    tv.tv_sec = TIMEOUT; // see line10
    tv.tv_usec = 0;

    // read/write file process start on
    n_line = select(STDIN_FILENO +1, &readfds, NULL, NULL, &tv);

    if(n_line == -1){

        perror("selece err");
        return 1;

    }else if(!n_line){

        printf("%d secs elapsed.\n", TIMEOUT);
        return 0;

    }

    // process proceed now to read file out
    if(FD_ISSET(STDOUT_FILENO, &readfds)){

        char buf[Buff_length + 1];
        int length;

        // in circumstance of no lock file
        length = read(STDOUT_FILENO, buf, Buff_length);
        if(length == -1){

            perror("read error.");
            return 1;

        }

        if(length){

            buf[length] = '\0';
            printf("read out data and write in as %s.\n", buf);

        }

        return 0;

    }

    fprintf(stderr, "exception is being catched.");
    return 1;

}

int main(){

    int result;
    result = funcQ();
    printf("%d", result);
    return result;

}