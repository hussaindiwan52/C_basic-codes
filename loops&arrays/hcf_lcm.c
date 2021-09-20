#include<stdio.h>
int main(){
    int num1,num2,min,hcf,lcm;
    printf("enter two numbers :-");
    scanf("%d %d",&num1,&num2);
    min=num1;
    if(min>num2){
        min=num2;
    }
    for (int i = min; i >0; i--)
    {
        if((num1%i==0) && (num2%i==0)){
                hcf=i;
                break;
        }
    }
    lcm =(num1*num2)/hcf;
    printf("hcf of %d and %d = %d \n",num1,num2,hcf);
    printf("lcm of %d and %d = %d ",num1,num2,lcm);

}
