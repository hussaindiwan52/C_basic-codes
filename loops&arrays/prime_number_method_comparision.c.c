#include<stdio.h>

int main(){
    int num;
    printf("enter number to be checked :-");
    scanf("%d",&num);
    int prime=1;
    int count=0;
    for (int i = 2;i<num; i++)
    {
        count++;
        if(num%i==0){
            prime=1;
            break;
        }
    }
    if (prime)
    {
        printf("%d is a prime number (iterating till n = %d times)",num,count);
    }
    else{
        printf("%d is not a prime number (iterating till n = %d times)",num,count);
    }
    
    printf("\n");
    
    count=0;
    prime=1;
    for (int i = 2;i<=num/2; i++)
    {
        count++;
        if(num%i==0){
            prime=1;
            break;
        }
    }
    if (prime)
    {
        printf("%d is a prime number (iterating till n/2 = %d times)",num,count);
    }
    else{
        printf("%d is not a prime number (iterating till n/2 = %d times)",num,count);
    }
    
    printf("\n");
    
    prime=1;
    count=0;
    for (int i = 2;i*i<=num; i++)
    {
        count++;
        if(num%i==0){
            prime=1;
            break;
        }
    }
    if (prime)
    {
        printf("%d is a prime number (iterating till sqrt n = %d times)",num,count);
    }
    else{
        printf("%d is not a prime number (iterating till sqrt n = %d times)",num,count);
    }
    
    printf("\n");
}
