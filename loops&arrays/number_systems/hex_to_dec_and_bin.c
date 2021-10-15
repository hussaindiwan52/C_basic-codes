#include <stdio.h>

int main()
{
    char hex[9];
    printf("hexadecimal = ");
    scanf("%s",hex);
    int dec=0,flag=0,placeval=1;
    for (int i = 8; i >=0; i--) {
        if(hex[i]=='\0'){
            flag=1;
        }
        if(flag){
            if(hex[i]>='0' && hex[i]<='9'){
                dec+=((hex[i]-'0')*placeval);
                placeval*=16;
            }
            else if(hex[i]>='A' && hex[i]<='F'){
                dec+=((10+hex[i]-'A')*placeval);
                placeval*=16;
            }
        }
    }
    printf("decimal = %d\n",dec);
    
    int bin=0;
    int arr[32];
    for (int i = 0; i < 32; i++) {
        arr[i]=0;
    }
    int i=0;
    while(dec!=0){
        arr[i]=dec%2;
        dec/=2;
        i++;
    }
    for (int i = 31; i >=0; i--) {
        bin*=10;
        bin+=arr[i];
    }
    printf("binary = %d",bin);
    
    return 0;
}
