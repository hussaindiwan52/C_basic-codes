#include <stdio.h>

int main()
{
    printf("enter number of rows :- ");
    int rows,odd;
    scanf("%d",&rows);
    odd=rows%2;
    int row=rows/2;
    for (int i = 1; i <=row; i++) {
        for (int j = 1; j<i; j++) {
            printf("%d*",i);
        }
        printf("%d\n",i);
    }
    if(odd){
        for (int i = 0; i <row; i++) {
            printf("%d*",row+1);
        }
        printf("%d\n",row+1);
    }
    for (int i = row; i >0; i--) {
        for (int j = i-1; j>0; j--) {
            printf("%d*",i);
        }
        printf("%d\n",i);
    }

    return 0;
}
