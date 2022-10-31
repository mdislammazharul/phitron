#include<stdio.h>

int main()
{
    int i, n, w, sum;

    i=0;
    sum=0;

    scanf("%d", &n);

    while(i < n)
    {
        scanf("%d", &w);
        sum += w;
        i++;
    }
    printf("%d", sum);

    return 0;
}
