#include <stdio.h>
int main()
{
    int row;
    printf("enter number of rows:-");
    scanf("%d",&row);
    
    // full pyramid
    for (int i = 0; i < row; i++) {
        for (int j = row; j>i; j--) {
            printf(" ");
        }
        for (int j = 0; j<=i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    
    printf("\n");
    
    // inverted full pyramid
    for (int i = 0; i < row; i++) {
        for (int j = 0; j<=i; j++) {
            printf(" ");
        }
        for (int j = row; j>i; j--) {
            printf("* ");
        }
        printf("\n");
    }
    
    printf("\n");
    
    // hollow full pyramid
    for (int i = 0; i < row; i++) {
        for (int j = row; j>i; j--) {
            printf(" ");
        }
        for (int j = 0; j<=i; j++) {
            if(j==0||j==i||i==row-1){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}
