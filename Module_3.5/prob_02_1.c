#include<stdio.h>

int main()
{
    int x, y, z;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);

    if(x < y && x < z)
    {
        if(y == z )
        {
            printf("B and C both are bigger");
        }
    }
    else if(y < z && y < x)
    {
        if(z == x )
        {
            printf("A and C both are bigger");
        }
    }
    else if(z < x && z < y)
    {
        if(x == y )
        {
            printf("A and B both are bigger");
        }
    }

    return 0;
}

