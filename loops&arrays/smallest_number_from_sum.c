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
            int rem_digits=0;
            if(nines<digits && digits==nines+1){
                printf("%d",sum%9);
                sum-=sum%9;
                digits--;
                rem_digits=digits-nines;
            }
            else{
                printf("1");
                sum--;
                digits--;
                rem_digits=digits-nines-1;
            }
            nines=sum/9;
            sum=sum%9;
            while(rem_digits-1>=0){
                printf("0");
                rem_digits--;
            }
            if (sum){
                printf("%d",sum);
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
