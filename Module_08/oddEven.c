#include<stdio.h>

int main()
{
    int arr[6];
    int i, oddCount=0;

    for(i=0; i<6; i++){
        scanf("%d", &arr[i]);
        if(arr[i] % 2 != 0){
            oddCount++;
        }
    }
    printf("Odd: %d, Even: %d", oddCount, (sizeof(arr)/sizeof(int))-oddCount);

    return 0;
}
