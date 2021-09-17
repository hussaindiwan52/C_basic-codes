#include<stdio.h>
int main(){
    float num1,num2,result;
    char operator;
    printf("\nenter two numbers :- ");
    scanf("%f %f",&num1,&num2);
    fflush(stdin);
    printf("\nwhat should be done to these numbers (+,-,*,/):- ");
    scanf("%c",&operator);
    switch (operator)
    {
    case '+':
        result=num1+num2;
        printf("\nnum1+num2 = %f",result);
        break;
    case '-':
        result=num1-num2;
        printf("\nnum1-num2 = %f",result);
        break;
    case '*':
        result=num1*num2;
        printf("\nnum1*num2 = %f",result);
        break;
    case '/':
        result=num1/num2;
        printf("\nnum1/num2 = %f",result);
        break;
    default:
        printf("\nenter +,-,*,/");
        break;
    }
}
