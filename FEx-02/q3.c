#include<stdio.h>

int main()
{
    long long int x, div=1;
    int i, digits, sum=0;
    scanf("%lld", &x);

    for(i=0; div>0; i++){
        digits = x%10;
        div = x/10;
        x = div;
        sum = sum + digits;
    }
    printf("%d", sum);
    return 0;
}
