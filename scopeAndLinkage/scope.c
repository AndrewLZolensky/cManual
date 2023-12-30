#include <stdio.h>
#include <stdlib.h>

int main() {

    // if we re-assign but do not re-define "a" in the nested block, it will
    // update the value outside of the scope of the block
    int a = 4;
    {
        a = 7;
        printf("a = %d\n", a);
    }
    printf("a = %d\n", a);

    // but if we do re-define AND re-assign it, the scope of the variable
    // is merely the inside of the nested block
    int b = 4;
    {
        int b = 7;
        printf("b = %d\n", b);
    }
    printf("b = %d\n", b);

    return(0);
}