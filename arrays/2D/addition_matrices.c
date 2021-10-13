#include <stdio.h>

int main()
{
    int row1,col1,row2,col2;
    printf("enter number of rows and columns for first matrix :- ");
    scanf("%d%d",&row1,&col1);
    int mat1[row1][col1];
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            printf("enter %d,%d element :- ",i,j);
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("enter number of rows and columns for second matrix :- ");
    scanf("%d%d",&row2,&col2);
    int mat2[row2][col2];
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            printf("enter %d,%d element :- ",i,j);
            scanf("%d",&mat2[i][j]);
        }
    }
    if(row1==row2 && col1==col2){
        printf("addition of matrices = \n");
        for (int i = 0; i < row2; i++) {
            for (int j = 0; j < col2; j++) {
                printf("%2d ",mat1[i][j]+mat2[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("addition of uneven matrices is not defined");
    }

    return 0;
}
