#include<stdio.h>

int main()
{
    int n, i, x, odd=0, even=0, oddIndex, evenIndex;
    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d", &x);
        if(x%2 != 0){
            odd++;
            oddIndex = i+1;
        }
        else{
            even++;
            evenIndex = i+1;
        }
    }
    if(odd == 1){
        printf("%d", oddIndex);
    }
    else{
        printf("%d", evenIndex);
    }

    return 0;
}
