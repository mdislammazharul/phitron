#include<stdio.h>

int main()
{
    int n,i,count=0;
    int a,b,c;
    scanf("%d", &n);

    int arr[n];

    for(i=0; i<n; i++){
        scanf("%d %d %d", &a, &b, &c);
        if(a+b+c > 1){
            count++;
        }
    }
    printf("%d", count);

    return 0;
}
