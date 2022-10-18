#include<stdio.h>

int main()
{
    int x, y, z;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &x,&y,&z);

    if(x>y && x>z)
    {
        printf("X is largest");
    }
    else if(y>x && y>z)
    {
        printf("Y is largest");
    }
    else
    {
        printf("Z is largest");
    }

    return 0;
}
