#include <stdio.h>
int main()
{
    int len, num, clone;
    printf("enter the number ");
    scanf("%d", &num);
    len=0;
    clone=num;
    while (clone>0)
    {
        clone=clone/10;
        len++;
    }
    printf("\nentered number is:- %d",num);
    printf("\nnew number with 1 added to every digit is:- ");
    int digits[len];
    for (int i = 1; i <= len; i++)
    {
        digits[len - i] = ((num % 10)+1)%10;
        num = num / 10;

    }
    for (int i = 0; i < len; i++)
    {
        printf("%d", digits[i]);
    }
    

}
