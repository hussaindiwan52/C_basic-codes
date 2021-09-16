#include<stdio.h>
int main(){
    int num1;
    unsigned int num2;
    printf("enter two numbers 1st signed & 2nd unsigned :-");
    scanf("%d %u",&num1,&num2);
    printf("\nmsb of input signed int =%d\n",num1>>30);
    printf("\nmsb of input unsigned int =%u\n",num2>>31);

    // 

    int num,n;
    printf("enter number and n:-");
    scanf("%d %d",&num,&n);
    printf("%dth bit from left side =%d\n",n,(num>>(31-n))&1);
    printf("%dth bit from right side =%d\n",n,(num>>(n-1))&1);
}
