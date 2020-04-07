//2020.4.07.pm7:20, by Vivy Chen (Queen)
//FileStream
//poll() functions using array type pollfd for multiplex as samas select() using bitmask 位元遮罩
//it is easier to use poll than select, since select requires exception definition in specifics.

#include <poll.h>
#include <stdio.h>
#include <unistd.h>
#define TIMEOUT 5

// int poll(struct poll *fds, nfds_t nfds, int timeout);

struct poll_fd {

    int file_descriptor;
    short events;
    short feedback_events;

};

int funcQ(void){

    struct poll_fd fds[2];
    int new_line;

    // to read out the input
    fds[0].file_descriptor = STDIN_FILENO;
    fds[0].events = POLLIN;

    // to check the fd is writable or not
    fds[1].file_descriptor = STDOUT_FILENO;
    fds[1].events = POLLOUT;

    // to start on service
    // 2nd arg in poll() means:
    //An unsigned int type used for the numbe of fd.
    new_line = poll(fds, 2, TIMEOUT * 1000);

    // error handlers hereby
    // exception handler hereby

    printf("stdin is readable, and stdout is writable. \n");

    return 0;

}

int main(){

    int result;
    result = funcQ();
    printf("%d", result);
    return result;

}