#include <stdio.h>
int countdigits(int n){
    n/=10;
    if(n==0){
        return 1;
    }
    return 1+countdigits(n);
}
int sumdigits (int n){
    if(n==0){
        return 0;
    }
    int digit=n%10;
    n/=10;
    return digit+sumdigits(n);
}
int main()
{
    int num;
    printf("enter Number :- ");
    scanf("%d",&num);
    printf("Number of digits in %d = %d \n",num,countdigits(num));
    printf("Sum of digits in %d = %d \n",num,sumdigits(num));
    return 0;
}
