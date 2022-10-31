#include<stdio.h>

int main()
{
    int arr[7];
    int i,x;
    arr[0] = 0;

    for(i=0; i<6; i++){
        scanf("%d", &x);
        arr[x-1] = x;
    }
    for(i=0; i<7; i++){
        if(arr[i] != i+1){
            printf("%d", i+1);
            break;
        }
    }

    return 0;
}
