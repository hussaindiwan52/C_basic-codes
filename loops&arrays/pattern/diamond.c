/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    printf("enter number of rows :- ");
    int rows,odd;
    scanf("%d",&rows);
    odd=rows%2;
    int row=rows/2;
    for (int i = 0; i < row; i++) {
        for (int j = row; j>i; j--) {
            printf(" ");
        }
        for (int j = 0; j<=i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    if(odd){
        for (int i = 0; i <=row; i++) {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j<=i; j++) {
            printf(" ");
        }
        for (int j = row; j>i; j--) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}