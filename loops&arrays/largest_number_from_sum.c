#include <stdio.h>

int main()
{
    int digits,sum;
    printf("enter the number of digits and their sum :- ");
    scanf("%d %d",&digits,&sum);
    if(sum<=digits*9){
        printf("largest number whose digits sum up to %d =",sum);
        int nines=0;
        nines=sum/9;
        if(nines!=0){
            sum=sum%9;
            for (int i = 0; i < nines; i++) {
                printf("9");
            }
            while(digits-nines!=0){
                printf("%d",sum);
                sum=sum/9;
                digits--;
            }
        }
        else{
            printf("%d",sum);
            digits--;
            while (digits!=0){
                printf("0");
                digits--;
            }
        }
    }
    else{
        printf("\nsuch a sum is not possible");
    }
    return 0;
}
