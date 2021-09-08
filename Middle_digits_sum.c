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
        digits[len-i]=num%10;
        num=num/10;
    }
    printf("entered num was:- ");
    for (int i = 0; i < len; i++)
    {
        printf("%d",digits[i]);
    }
    printf("\nsum of middle digits:- %d",digits[(len-1)/2]+digits[((len-1)/2)+1]);
}
