#include<stdio.h>

int main()
{
    int x, y, z;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);

    if(x > y && x > z)
    {
        printf("A is bigger");
    }
    else if(y > x && y > z)
    {
        printf("B is bigger");
    }
    else if (x == y && y == z)
    {
        printf("They are equal");
    }
    else
    {
        printf("C is bigger");
    }

    return 0;
}
