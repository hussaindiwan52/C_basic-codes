#include <stdio.h>
int main()
{
    int num1,num2;
    printf("enter two numbers to be swapped :-");
    scanf("%d %d",&num1,&num2);
    printf("before swapping A = %d and B = %d\n",num1,num2);
    num1=num1^num2;
    num2=num2^num1;
    num1=num1^num2;
    printf("after swapping A = %d and B = %d\n",num1,num2);

}
