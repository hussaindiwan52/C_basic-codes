#include <stdio.h>

int main()
{
    int bin,num_dec=0,placeval=1;
    scanf("%d",&bin);
    while(bin!=0){
        num_dec+=((bin%10)*placeval);
        placeval*=2;
        bin/=10;
    }
    printf("%d\n",num_dec);
    int arr[12];
    for (int i = 0; i < 12; i++) {
        arr[i]=0;
    }
    int i=0;
    while(num_dec!=0){
        arr[i]=num_dec%8;
        num_dec/=8;
        i++;
    }
    for (int i = 11; i >=0; i--) {
        printf("%d",arr[i]);
    }
    return 0;
}
