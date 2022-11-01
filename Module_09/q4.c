#include<stdio.h>

int main()
{
    int n,i,j;
    scanf("%d", &n);

    int arr[n];
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n; i++){
            printf("%d - ", arr[i]);
        for(j=0; j<n; j++){
            if(j != i){
                printf("%d ", arr[j]);
            }
        }
        printf("\n");
    }
    return 0;
}
