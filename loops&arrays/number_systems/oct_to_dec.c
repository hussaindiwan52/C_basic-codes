#include <stdio.h>

int main()
{
    int oct,num=0,placeval=1;
    scanf("%d",&oct);
    while(oct!=0){
        num+=((oct%10)*placeval);
        placeval*=8;
        oct/=10;
    }
    printf("%d",num);
    return 0;
}
