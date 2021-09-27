#include <stdio.h>

int main()
{
    int digits,sum;
    printf("enter the number of digits and their sum :- ");
    scanf("%d %d",&digits,&sum);
    if(sum<=digits*9){
        int nines=0;
        nines=sum/9;
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
    else{
        printf("such a sum is not possible");
    }
    return 0;
}
