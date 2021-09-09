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
    int digits[len];
    for (int i = 1; i <= len; i++)
    {
        digits[len - i] = num % 10;
        num = num / 10;
    }
    int sum = 0;
    printf("entered num was:- ");
    for (int i = 0; i < len; i++)
    {
        printf("%d", digits[i]);
        sum += digits[i];
    }
    printf("\nsum of all digits:- %d", sum);
}
