#include <stdio.h>
int main()
{
    int num;
    printf("enter number :-");
    scanf("%d",&num);
    if(num&1){
        printf("\nLSB is set ");
    }
    else{
        printf("\nLSB is not set ");

    }
}
