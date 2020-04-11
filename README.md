# Linux_sys_program

using C （System Programming Language）. 除了撰寫系統，亦可撰寫網路通訊和嵌入式程式。
總之，學習此語言，會拓寬你的視野眼界，一起感受唄～～～ ：）

# Unix

C 語言 (1989) 是美國電話與電報公司內部使用的語言，然而為了公佈 Unix sys, 只好被迫公開此語言。

# Linux, 系統程式設計

Unix-alike, the distinguish way to specif the Linux & Unix sys, is the Linux sys also support other sys calls, and offers more features.

# C Code Base, 基本標準函式庫方法調用

* IO

(1) File IO

https://github.com/QueenieCplusplus/Linux_sys_program/blob/master/open.c (read out file)

https://github.com/QueenieCplusplus/Linux_sys_program/blob/master/read.c (write in buffer)

(2) Socket IO (Stream)

https://github.com/QueenieCplusplus/Linux_sys_program/blob/master/rewind.c

https://github.com/QueenieCplusplus/Linux_sys_program/blob/master/select.c

https://github.com/QueenieCplusplus/Linux_sys_program/blob/master/poll.c

* Process 

https://github.com/QueenieCplusplus/Linux_sys_program/blob/master/fork.c

https://github.com/QueenieCplusplus/Linux_sys_program/blob/master/atexit.c

and wait() 

* Threads

https://github.com/QueenieCplusplus/Linux_sys_program/blob/master/pthread_create.c

and mutex_lock

* Memory Mgmt

https://github.com/QueenieCplusplus/Linux_sys_program/blob/master/malloc.c

free()

posix_memalign()

heap & stack, 堆積與堆疊 using sbrk()

mmap()

* Signal

* File Sys - Directory

* Time

# Pointer, 記憶體及其指標

C 語言最強大的特色為指標，是 Unix 與 Linux 作業系統的核心語言，意即這兩種作業系統是由 C 寫成的！

0, all about memory

https://github.com/QueenieCplusplus/Pointer_and_Memory

1, ptr and variable

https://github.com/QueenieCplusplus/Pointer_and_Memory/blob/master/ptr_and_var.c

2, ptr and array_list

https://github.com/QueenieCplusplus/Linux_sys_program/blob/master/ptr_and_array.c

3, ptr and func_call

* call by val, 傳值呼叫

* call by ref, 傳址（參照）呼叫

4, ptr and string or char

5, ptr and structure

6, ptr and linked_list

7, binary tree with ptr

8, ptr and file_io
