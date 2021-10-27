#include <stdio.h>

int sum_till_n (int n)
{
    if(n==1){
        return 1;
    }
    return n+sum_till_n(n-1);
}

int main()
{
    int num;
    printf("enter a number :- ");
    scanf("%d",&num);
    printf("sum of all numbers till %d :- %d",num,sum_till_n(num));

    return 0;
}
