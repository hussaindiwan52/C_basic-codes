#include <stdio.h>
int main()
{
    int num;
    printf("enter number to be halved :-");
    scanf("%d",&num);
    num=num>>1;
    printf("%d",num);
}
