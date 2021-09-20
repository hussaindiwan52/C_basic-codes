#include<stdio.h>
int main(){
    int n,abs=0;
    printf("enter a number :-");
    scanf("%d",&n);
    abs=n;
    if (n<0)
    {
        abs=n*(-1);
    }
    printf("absolute value of %d = %d",n,abs);
    
}
