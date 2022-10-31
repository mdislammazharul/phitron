#include<stdio.h>
int main()
{
    int min, max, a, b, c, d;
    scanf("%d %d %d %d",&a,&b,&c,&d);

    min=a;
    max=a;

    if(min > b)
        min = b;
    else if(max < b)
        max = b;
    if(min > c)
        min = c;
    else if(max < c)
        max = c;
    if(min > d)
        min = d;
    else if(max < d)
        max = d;

    printf("Largest = %d \nSmallest = %d", max, min);
}
