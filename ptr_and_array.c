// 2020, 4/11, pm 7:00, by Vivy Chen (Queen)
// ptr and array

#include <stdio.h>

int main(){

    int a[8];
    int index;

    for(index=0; index<8; index++){

        printf("while loop: a[%d]", index);

            scanf("%d", &a[index]);

    }

    getchar();
    return 0;

}

// ➜  ~ git:(react2) ✗ /Users/pintred/Desktop/ptr_and_array ; exit;
// while loop: a[0]1
// while loop: a[1]2
// while loop: a[2]3
// while loop: a[3]4
// while loop: a[4]5
// while loop: a[5]6
// while loop: a[6]7
// while loop: a[7]8

// [程序完成]

