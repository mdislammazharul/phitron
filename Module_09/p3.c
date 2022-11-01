#include<stdio.h>

int main()
{
    int i,n,flag=0;
    scanf("%d", &n);

    int arr[n];
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
        if(i > 0){
            if(arr[0] != arr[i]){
                flag=1;
            }
        }
    }
    if(flag != 0){
        printf("No");
    }
    else{
        printf("Yes");
    }
    return 0;
}
