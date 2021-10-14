#include <stdio.h>

int main()
{
    int bin,num=0,placeval=1;
    scanf("%d",&bin);
    while(bin!=0){
        num+=((bin%10)*placeval);
        placeval*=2;
        bin/=10;
    }
    printf("%d",num);
    return 0;
}
