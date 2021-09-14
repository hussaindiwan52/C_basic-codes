#include <stdio.h>
int main()
{
    int num,n;
    printf("enter number and nth place from least significant bit :-");
    scanf("%d %d",&num,&n);
    while(num!=0 && n!=1){
        num=num>>1;
        n--;
    }
    if(num&1){
        printf("nth bit was 1");
    }
    else{
        printf("nth bit was 0");

    }
}
