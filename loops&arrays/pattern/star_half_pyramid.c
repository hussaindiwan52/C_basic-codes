#include <stdio.h>
int main()
{
    int row;
    printf("enter number of rows:-");
    scanf("%d",&row);
    
    // half pyramid
    for (int i = 0; i < row; i++) {
        for (int j = 0; j<=i; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    // inverted half pyramid
    for (int i = 0; i < row; i++) {
        for (int j = row; j>i; j--) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    // hollow inverted half pyramid
    for (int i = 0; i < row; i++) {
        for (int j = row; j>i; j--) {
            if(i==0 || j==row|| j-i==1){
                printf(" * ");
            }
            else{
                printf("   ");
            }
        }
        printf("\n");
    }
    printf("\n");
}
