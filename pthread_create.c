//2020.4.07.pm9:20, by Vivy Chen (Queen)
//Threads

#include <pthread.h>
#include <stdlib.h>
#include <stdio.h>

// int pthread_create(arg1, arg2, arg3, arg4);
// arg1 = pthread_t *thread,
// arg2 = const pthread_attr_t *attr, nullable
// arg3 = void *(*start_routine)(void *), non-nullable
// arg4 = void *arg, nullable

// new_thread_num = pthread_create(&thread, NULL, start_routine, NULL);

void  *start_thread_routine(void *msg){
    printf("threads created.");
    return msg;
}

void func_to_create_thread(void){

    pthread_t threadA, threadB;

    pthread_create(&threadA, NULL, start_thread_routine, NULL);
    pthread_create(&threadB, NULL, start_thread_routine, NULL);

    pthread_join(threadA, NULL);
    pthread_join(threadB, NULL);

    printf("2 threads is created.");

}

int main(){

    func_to_create_thread();
    return 0;

}

// [[Running] cd "/Users/pintred/Desktop/" && gcc atexit.c -o atexit && "/Users/pintred/Desktop/"atexit
// threads created.threads created.2 threads is created.
// [Done] exited with code=0 in 0.185 seconds