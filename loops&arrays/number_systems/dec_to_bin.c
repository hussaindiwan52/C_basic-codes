#include <stdio.h>

int main()
{
    int num,bin=0;
    int arr[32];
    scanf("%d",&num);
    for (int i = 0; i < 32; i++) {
        arr[i]=0;
    }
    int i=0;
    while(num!=0){
        arr[i]=num%2;
        num/=2;
        i++;
    }
    for (int i = 31; i >=0; i--) {
        bin*=10;
        bin+=arr[i];
    }
    printf("%d",bin);
    return 0;
}
