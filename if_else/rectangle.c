#include<stdio.h>
int main(){
    float side1,side2;
    printf("enter length and breadth of rectangle :-");
    scanf("%f %f",&side1,&side2);
    if(side1*side2>2*(side1+side2)){
        printf("area of rectangle > perimeter ");
    }
    else{
        printf("area of rectangle < perimeter ");

    }

}
