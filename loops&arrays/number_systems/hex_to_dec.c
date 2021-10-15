#include <stdio.h>

int main()
{
    char hex[9];
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
    printf("%d",dec);
    
    return 0;
}
