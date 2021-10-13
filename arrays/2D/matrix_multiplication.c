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
    if(col1==row2){
        printf("multiplication of matrices = \n");
        for (int i = 0; i < row1; i++) {
            for (int j = 0; j < col1; j++) {
                int prod=0;
                for (int k = 0; k < col2; k++) {
                    prod+=mat1[i][k]*mat2[k][j];
                }
                printf("%d ",prod);
            }
            printf("\n");
        }
    }
    else{
        printf("subtraction of uneven matrices is not defined");
    }

    return 0;
}
