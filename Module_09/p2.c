#include<stdio.h>

int main()
{
    int n,i;
    scanf("%d", &n);

    int arr[n];

    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int q;
    int index, value;
    scanf("%d", &q);
    for(i=0; i<q; i++){
        scanf("%d %d", &index, &value);
        arr[index] = arr[index] + value;
    }

    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;

}
