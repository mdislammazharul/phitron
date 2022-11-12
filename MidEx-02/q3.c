#include<stdio.h>

int main()
{
    int i, arr[15];
    int pow = 1;

    for(i=0; i<15; i++){
        arr[i] = pow;
        pow = 2 * arr[i];
    }

    for(i=0; i<15; i++){
        printf("%d\n", arr[i]);
    }

    return 0;
}
