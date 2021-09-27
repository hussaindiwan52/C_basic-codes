#include <stdio.h>

int main()
{
    int count=1;
    int rows;
    scanf("%d",&rows);
    for(int i=0;i<rows;i++){
        for(int j=0;j<=i;j++){
            printf("%d  ",count);
            count++;
        }
        printf("\n");
    }

    return 0;
}
