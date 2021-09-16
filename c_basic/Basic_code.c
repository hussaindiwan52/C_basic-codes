#include <stdio.h>
int main()
{
    printf("hello world\n\n");
    printf("\n"); 
    // 
    printf("\"hello\"\n\n");
    printf("\n"); 
    // 
    printf("enter two numbers ");
    int num1,num2,sum;
    scanf("%d %d",&num1,&num2);
    sum=num1+num2;
    printf("sum of %d annd %d is = %d\n\n",num1,num2,sum);
    printf("\n"); 
    // 
    printf("enter the principle amount,rate and time ");
    float amount,principle,rate,time;
    amount=0;
    scanf("%f %f %f",&principle,&rate,&time);
    amount=(float)(principle*rate*time)/100;
    printf("simple interest is %f \n\n",amount);
    printf("\n");
    printf("enter marks ");
    int marks[5];
    float avg=0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&marks[i]);
        avg+=(float)marks[i]/5;
    }
    printf("average of marks = %f \n\n",avg);
    printf("\n"); 
    // 
    printf("enter basic salary ");
    float salary=0;
    float gross_salary=0;
    scanf("%f",&salary);
    gross_salary=salary+0.6*salary;
    printf("gross salary is = %f \n\n",gross_salary);
    printf("\n");
    // 
    printf("enter radius of circle and length,breadth of rectangle ");
    float ar_circle,ar_rectangle,radius,length,breadth;
    scanf("%f %f %f",&radius,&length,&breadth);
    ar_circle=3.14*radius*radius;
    ar_rectangle=length*breadth;
    printf("area of circle = %f \narea of rectangle = %f \n\n",ar_circle,ar_rectangle);
    printf("\n"); 
    //  
    printf("enter temperature in fahrenheit ");
    float fahrenheit,celcius;
    scanf("%f",&fahrenheit);
    celcius=5*(fahrenheit-32)/9;
    printf("temperature in celcius is %f \n\n",celcius);
    printf("\n"); 
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
    printf("\n"); 
    // 
    int num;
    printf("\nenter negative number :- ");
    scanf("%d",&num);
    if(num<0){
        printf("%d is negative \n",num);
    }
    else{
        printf("entered number is not negative\n");
    }
    printf("\n"); 
    // 
    int num4;
    printf("enter number :- ");
    scanf("%d",&num4);
    if(num4&1){
        printf("\n%d is odd ",num4);
    }
    else{
        printf("\n%d is even ",num4);

    }
    
    if(num4%2==1){
        printf("\n%d is odd ",num4);
    }
    else{
        printf("\n%d is even ",num4);

    }
    
    if(num4!=(num4>>1)<<1){
        printf("\n%d is odd ",num4);
    }
    else{
        printf("\n%d is even ",num4);

    }
    printf("\n"); 
    // 
    int num_sub,max_marks;
    printf("\nenter number of subjects and maximum marks that can be obtained :-");
    scanf("%d %d",&num_sub,&max_marks);
    float percent=0;
    float tmp;
    for (int i = 0; i < num_sub; i++)
    {
        printf("\nenter marks of subject %d :-",i+1);
        scanf("%f",&tmp);
        percent+=(tmp*100.0/num_sub);
    }
    percent=percent/max_marks;
    printf("\ntotal percentage of marks = %0.2f",percent);
    if(percent>=50){
        printf("\npass");
    }
    else{
        printf("\nfail");
    }
    printf("\n"); 
    // 
    int qty;
    float price,discount;
    float expenses;
    printf("\nenter quantity of items:- ");
    scanf("%d",&qty);
    printf("\nenter price of 1 item :-");
    scanf("%f",&price);
    printf("\nenter special discount percentage :-");
    scanf("%f",&discount);
    expenses=price*qty;
    if (qty>1000){
        expenses=expenses*(1-(discount*0.01));
    }
    printf("cost of items = %f ",expenses);
    printf("\n"); 
    // 
}
