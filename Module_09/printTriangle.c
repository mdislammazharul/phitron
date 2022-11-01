#include<stdio.h>
#include<math.h>

int main()
{
    int i,j;
    int dot;

    for(i=1; i<=5; i++){
        for(j=0; j<9; j++){
            dot = (9/2*i);

            if(j == dot){
                printf("*");
            }
            else{
               printf(".");
            }
        }
        printf("\n");
    }
    return 0;
}
