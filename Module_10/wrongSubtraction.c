#include<stdio.h>

int main()
{
    long long int n;
    int k;

    scanf("%lld %d", &n, &k);

    while(k != 0){
        if(n%10 != 0){
            n = n-1;
        }
        else{
            n = n/10;
        }
        k--;
    }
    printf("%d", n);

    return 0;
}
