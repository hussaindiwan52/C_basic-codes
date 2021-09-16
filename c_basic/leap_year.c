#include<stdio.h>
int main(){
    int year;
    printf("enter the year to be checked :- ");
    scanf("%d",&year);
    if(year<1900 || year>3000){
        printf("enter year between 1900 and 3000");
    }
    else if(year%4==0 &&(year%100!=0 || year%400==0)){
        printf("%d is a leap year .",year);
    }
    else{
        printf("%d is not a leap year .",year);
    }
}
