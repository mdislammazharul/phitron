#include<stdio.h>

int main()
{
    int N=6;
    int arr[N];
    int i;

    for(i=0; i<N; i++){
        scanf("%d", &arr[i]);
    }
    int m = arr[0];
    for(i=0; i<N; i++){
        if(arr[i] > m){
            m = arr[i];
        }
    }

    int nm = arr[0];
    for(i=0; i<N; i++){
        if(arr[i] > nm && arr[i] != m){
            nm = arr[i];
        }
    }
    printf("The maximum value is: %d", nm);
    return 0;
}
