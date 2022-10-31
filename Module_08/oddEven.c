#include<stdio.h>
#define arrayElements 6

int main()
{
    int arr[arrayElements];
    int i, oddCount=0;

    for(i=0; i<arrayElements; i++){
        scanf("%d", &arr[i]);
        if(arr[i] % 2 != 0){
            oddCount++;
        }
    }
    printf("Odd: %d, Even: %d", oddCount, (sizeof(arr)/sizeof(int))-oddCount);

    return 0;
}
