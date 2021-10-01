#include <stdio.h>

int main()
{
    int rows;
    printf("enter number of rows:- ");
    scanf("%d",&rows);
    int cols=2*rows-1;
    int pascal[rows][cols];
    for (int i = 0; i < rows; i++) {
        for(int j =0;j<cols;j++){
            pascal[i][j]=0;
        }
    }
    pascal[0][rows-1]=1;
    for (int i = 1; i < rows; i++) {
        for(int j =0;j<cols;j++){
            if(j!=0 || j!=cols-1){
                pascal[i][j]=pascal[i-1][j-1]+pascal[i-1][j+1];
            }
            if(j==0){
                pascal[i][j]=pascal[i-1][j+1];
            }
            if(j==cols-1){
                pascal[i][j]=pascal[i-1][j-1];
            }
        }
    }
    printf("\n");
    for (int i = 0; i < rows; i++) {
        for(int j =0;j<cols;j++){
            if(pascal[i][j]!=0){
                printf("%d ",pascal[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}
