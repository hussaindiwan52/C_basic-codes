#include <stdio.h>
int main()
{
    int row;
    printf("enter number of rows:-");
    scanf("%d",&row);
    
    //half pyramid
    for (int i = 0; i < row; i++) {
        for (int j = 1; j<=i+1; j++) {
            printf("%d ",j);
        }
        printf("\n");
    }
    
    printf("\n");
    
    //inverted half pyramid
    for (int i = 0; i < row; i++) {
        for (int j = row; j>i; j--) {
            printf("%d ",row-j+1);
        }
        printf("\n");
    }
    
    printf("\n");
    
    //hollow half pyramid
    for (int i = 0; i < row; i++) {
        for (int j = 1; j<=i+1; j++) {
            if(j==1||i==row-1||j-i==1){
                printf("%d ",j);
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    
}
