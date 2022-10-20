#include<stdio.h>

int main()
{
    int x, y;

    printf("Enter two integer: ");
    scanf("%d %d", &x, &y);

    if(x > y)
    {
        printf("A is bigger");
    }
    else if( x == y)
    {
        printf("They are equal");
    }
    else
    {
        printf("B is bigger");
    }

    return 0;
}
