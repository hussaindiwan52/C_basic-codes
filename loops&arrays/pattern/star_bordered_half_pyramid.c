#include <stdio.h>

int main()
{
    printf("enter number of rows :- ");
    int rows;
    scanf("%d",&rows);
    int odd=rows%2;
    rows=rows/2;
    printf("*\n");
    for (int i = 1; i <=rows-1; i++) {
        int k=1;
        printf("* ");
        for(int j=1;j<=2*i-1;j++){
            if(j==i){
                k=i;
                printf("%d ",k);
            }
            else if(j<i){
                printf("%d ",k);
                k++;
            }
            else{
                k--;
                printf("%d ",k);
            }
        }
        k=1;
        printf("*\n");
    }
    if(odd){
        int k=1;
        printf("* ");
        for (int i = 1; i < 2*rows; i++) {
            if(i==rows){
                k=i;
                printf("%d ",k);
            }
            else if(i<rows){
                printf("%d ",k);
                k++;
            }
            else{
                k--;
                printf("%d ",k);
            }
        }
        printf("*\n");
    }
    for (int i = 1; i <rows; i++) {
        int k=1,halfway=0;
        printf("* ");
        for(int j = 2*rows-i-1;j>i;j--){
            if(k==rows-i&&halfway==0){
                printf("%d ",k);
                halfway=1;
            }
            else if(k<rows-i&&halfway==0){
                printf("%d ",k);
                k++;
            }
            else{
                k--;
                printf("%d ",k);
            }
        }
        k=1;
        printf("*\n");

    }
    printf("* ");
}
