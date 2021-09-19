#include<stdio.h>
int main(){
    for (int i = 0; i < 10; i++)
    {
        printf("hello\n");
    }
    printf("\n");
    // 
    for (int i = 1; i <= 10; i++)
    {
        printf("%d \n",i);
    }
    printf("\n");
    //
    int table1;
    printf("enter number for multiplication table :-");
    scanf("%d",&table1);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n",table1,i,table1*i);
    }
    printf("\n");
    // 
    int table2;
    printf("enter number for alternate multiplication table :-");
    scanf("%d",&table2);
    for (int i = 1; i <= 10; i+=2)
    {
        printf("%d x %d = %d\n",table2,i,table2*i);
    }
    printf("\n");
    // 
    int num1,pow,result=1;
    printf("enter number and to what power it should be raised to :-");
    scanf("%d %d",&num1,&pow);
    int powclone=pow;
    while(pow!=0){
        result*=num1;
        pow--;
    }
    printf("\n%d ^ %d = %d\n",num1,powclone,result);
    printf("\n");
    // 
    printf("all even numbers from 1 to 100 are :-\n");
    for (int i = 0; i <=100; i+=2)
    {
        printf("%d\n",i);
    }
    printf("all odd numbers from 1 to 100 are :-\n");
    for (int i = 1; i <=100; i+=2)
    {
        printf("%d\n",i);
    }
    printf("\n");
    // 
    int num2,sum_dig=0;
    printf("enter number whose digits are to be summed :- ");
    scanf("%d",&num2);
    while (num2!=0)
    {
        sum_dig+=num2%10;
        num2/=10;
    }
    printf("sum of all digits =%d \n",sum_dig);
    printf("\n");
    // 
    int num3;
    printf("enter number to be checked :-");
    scanf("%d",&num3);
    int prime=1;
    for (int i = 2;i<=num3/2; i++)
    {
        if(num3%i==0){
            prime=1;
            break;
        }
    }
    if (prime)
    {
        printf("%d is a prime number ",num3);
    }
    else{
        printf("%d is not a prime number ",num3);
    }
    printf("\n");
    //
    int num4,summ_tillnum=0;
    printf("enter number till which to sum :- ");
    scanf("%d",&num4);
    for (int i = 1; i <=num4; i++)
    {
        summ_tillnum+=i;
    }
    printf("sum of all numbers till %d =%d ",num4,summ_tillnum);
    printf("\n");
    //
    int num5,factorial=1;
    printf("enter number :-");
    scanf("%d",&num5);
    for (int i = 1; i <= num5; i++)
    {
        factorial*=i;
    }
    printf("%d!=%d\n",num5,factorial);
    printf("\n");
    //
    int num6,reverse=0,clone_num6;
    printf("enter number whose digits are to be reversed and checked for palindrome:- ");
    scanf("%d",&num6);
    clone_num6=num6;
    while (num6!=0)
    {
        reverse*=10;
        reverse+=num6%10;
        num6/=10;
    }
    printf("reverse of number =%d \n",reverse);
    if(clone_num6==reverse){
        printf("%d is a palindrome",reverse);
    }
    else{
        printf("%d is a palindrome",clone_num6);
    }
    printf("\n");
    // 
    int n,fib1=0,fib2=1,fib3;
    printf("enter n for fibonacci :-");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        printf("%d \n",fib1);
        fib3=fib2+fib1;
        fib1=fib2;
        fib2=fib3;
    }
    
}
