#include <stdio.h>
int main()
{
    int row,col;
    printf("enter number of rows and columns :-");
    scanf("%d %d",&row,&col);
    //solid rectangle
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf(" * ");
        }
        printf("\n");
    }
    
    printf("\n");
    printf("\n");
    //hollow rectangle
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if (i==0||i==row-1||j==0||j==col-1){
                printf(" * ");
            }
            else{
                printf("   ");
            }
        }
        printf("\n");
    }
