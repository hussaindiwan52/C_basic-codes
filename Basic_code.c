#include <stdio.h>
int main()
{
    printf("hello world\n\n");
    // 
    printf("\"hello\"\n\n");
    // 
    printf("enter two numbers ");
    int num1,num2,sum;
    scanf("%d %d",&num1,&num2);
    sum=num1+num2;
    printf("sum of %d annd %d is = %d\n\n",num1,num2,sum);
    // 
    printf("enter the principle amount,rate and time ");
    float amount,principle,rate,time;
    amount=0;
    scanf("%f %f %f",&principle,&rate,&time);
    amount=(float)(principle*rate*time)/100;
    printf("simple interest is %f \n\n",amount);
    //
    printf("enter marks ");
    int marks[5];
    float avg=0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&marks[i]);
        avg+=(float)marks[i]/5;
    }
    printf("average of marks = %f \n\n",avg);
    // 
    printf("enter basic salary ");
    float salary=0;
    float gross_salary=0;
    scanf("%f",&salary);
    gross_salary=salary+0.6*salary;
    printf("gross salary is = %f \n\n",gross_salary);
    //
    printf("enter radius of circle and length,breadth of rectangle ");
    float ar_circle,ar_rectangle,radius,length,breadth;
    scanf("%f %f %f",&radius,&length,&breadth);
    ar_circle=3.14*radius*radius;
    ar_rectangle=length*breadth;
    printf("area of circle = %f \narea of rectangle = %f \n\n",ar_circle,ar_rectangle);
    // 
    printf("enter temperature in fahrenheit ");
    float fahrenheit,celcius;
    scanf("%f",&fahrenheit);
    celcius=5*(fahrenheit-32)/9;
    printf("temperature in celcius is %f \n\n",celcius);
    // 
    printf("enter two numbers ");
    int c,d;
    scanf("%d %d",&c,&d);
    printf("before swapping c = %d d = %d\n",c,d);
    int temp=c;
    c=d;
    d=temp;
    printf("after swapping once with third variable c = %d d = %d\n",c,d);
    c=c+d;
    d=c-d;
    c=c-d;
    printf("after swapping once with addition c = %d d = %d\n",c,d);
    c=c*d;
    d=c/d;
    c=c/d;
    printf("after swapping once with multiplication c = %d d = %d\n",c,d);

}
