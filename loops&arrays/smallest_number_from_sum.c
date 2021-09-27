#include <stdio.h>

int main()
{
    int digits,sum;
    scanf("%d %d",&digits,&sum);
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
    return 0;
}
