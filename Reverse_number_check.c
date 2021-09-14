#include <stdio.h>
int main()
{
    int len, num, clone1,clone2;
    printf("enter the number ");
    scanf("%d", &num);
    len=0;
    clone1=num;
    clone2=num;
    while (clone1>0)
    {
        clone1=clone1/10;
        len++;
    }
    int digits[len];
    for (int i = 1; i <= len; i++)
    {
        digits[len - i] = num % 10;
        num = num / 10;
    }
    printf("reversed num is:- ");
    int reverse=0;
    int count=1;
    for (int i = 0; i <len; i++)
    {
        reverse+=digits[i]*count;
        count=count*10;
    }
    printf("%d",reverse);
    if(clone2^reverse){
        printf("\n%d and its reverse %d are not equal",clone2,reverse);
    }
    else{
        printf("\n%d and its reverse %d are equal",clone2,reverse);

    }
}
