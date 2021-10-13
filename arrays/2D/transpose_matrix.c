#include <stdio.h>

int main()
{
    int row,col;
    printf("enter number of rows and columns for matrix :- ");
    scanf("%d%d",&row,&col);
    int mat[row][col];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("enter %d,%d element :- ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    
    printf("matrix is :- \n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    
    printf("transpose of matrix is :- \n");
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            printf("%d ",mat[j][i]);   
        }
        printf("\n");
    }
    
    return 0;
}
