#include <stdio.h>
int main()
{
    int len, num;
    printf("enter length of number and number ");
    scanf("%d", &len);
    scanf("%d", &num);
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
}
