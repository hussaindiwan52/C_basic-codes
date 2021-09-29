#include <stdio.h>

int main()
{
    printf("enter number of rows :- ");
    int rows,odd;
    scanf("%d",&rows);
    odd=rows%2;
    int row=rows/2;
    int count=0;
    for (int i = 1; i <=row; i++) {
        for (int j = 1; j<i; j++) {
            count++;
            printf("%d*",count);
        }
        count++;
        printf("%d\n",count);
    }
    if(odd){
        for (int i = 1; i <=row; i++) {
            printf("%d*",count+i);
        }
        printf("%d\n",count+row+1);
    }
    int k=1;
    for (int i = 0; i <row; i++) {
        for(int j = row-1;j>i;j--){
            printf("%d*",count-j);
            k++;
        }
        printf("%d\n",count-i);
        count=count-k+1;
        k=1;
    }
    return 0;
}
