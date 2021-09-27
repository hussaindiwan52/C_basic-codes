#include <stdio.h>

int main()
{
    int digits,sum;
    printf("enter the number of digits and their sum :- ");
    scanf("%d %d",&digits,&sum);
    if(sum<=digits*9){
        printf("smallest number whose digits sum up to %d =",sum);
        int nines=0;
        nines=sum/9;
        if(nines!=0){
            if(nines<digits){
                printf("%d",sum%9);
                sum-=sum%9;
                digits--;
            }
            nines=sum/9;
            sum=sum%9;
            while(digits-nines!=0){
                printf("%d",sum);
                sum=sum/9;
                digits--;
            }
            for (int i = 0; i < nines; i++) {
                printf("9");
            }
        }
        else if(digits==1){
            printf("%d",sum);
        }
        else{
            printf("1");
            digits--;
            while(digits-2>-1){
                printf("0");
                digits--;
            }
            printf("%d",sum-1);
        }
        
    }
    else{
        printf("\nsuch a sum is not possible");
    }
    return 0;
}
