// 2020, 4/11, pm 8:30, by Vivy Chen (Queen)
// ptr and func
// call by ref, which means address



#include <stdio.h>

void call_by_addr(int *, int *);

int main(){

    int star = 100, moon = 200;

   

    printf("star is %d, moon is %d", star, moon);

    /*call by address, 傳址呼叫*/
    call_by_addr(&star, &moon);
    /*  
    call_by_addr(star, moon); this is incompatible, 
    shall use & addressing operator to converse from int to pointer 
    */

    printf("star is %d, moon is %d", star, moon);

    getchar();
    return 0;

}

void call_by_addr(int *a, int *b){

    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

// }

// ➜  ~ git:(react2) ✗ /Users/pintred/Desktop/ptr_and_func ; exit;
// star is 100, moon is 200star is 200, moon is 100




