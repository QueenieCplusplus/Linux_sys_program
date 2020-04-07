//2020.4.07.pm8:15, by Vivy Chen (Queen)
//Process
//fork()
// parent pid is diff from child pid
// 父行程為原行程，與子行程同步進行

#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

// pid_t fork(void);

int funcQ(){

    pid_t pid;
    pid = fork();

    if(pid > 0)
        printf("I am parent process of process ID of %d\n", pid);
    
    else if(!pid)
        printf("I am child process.");

    else if(pid == -1)
        perror("fork error");


    return 0;

}

int main(){

    int result;
    result = funcQ();
    printf("%d", result);
    return result;

}

