#include <stdio.h>

int main()
{
    int oct,num_dec=0,bin=0,placeval=1;
    printf("octal = ");
    scanf("%d",&oct);
    while(oct!=0){
        num_dec+=((oct%10)*placeval);
        placeval*=8;
        oct/=10;
    }
    int arr[32];
    printf("decimal = %d\n",num_dec);
    for (int i = 0; i < 32; i++) {
        arr[i]=0;
    }
    int i=0;
    while(num_dec!=0){
        arr[i]=num_dec%2;
        num_dec/=2;
        i++;
    }
    for (int i = 31; i >=0; i--) {
        bin*=10;
        bin+=arr[i];
    }
    printf("binary = %d",bin);
    return 0;
}
