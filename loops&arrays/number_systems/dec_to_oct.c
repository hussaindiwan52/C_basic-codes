#include <stdio.h>

int main()
{
    int num;
    int arr[12];
    printf("decimal = ");
    scanf("%d",&num);
    for (int i = 0; i < 12; i++) {
        arr[i]=0;
    }
    int i=0;
    while(num!=0){
        arr[i]=num%8;
        num/=8;
        i++;
    }
    for (int i = 11; i >=0; i--) {
        printf("binary = %d",arr[i]);
    }
    return 0;
}
