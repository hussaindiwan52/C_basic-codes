#include<stdio.h>
int main(){
    int angle1,angle2,angle3;
    printf("enter 3 angles of the triangle :-");
    scanf("%d %d %d",&angle1,&angle2,&angle3);
    if (angle1+angle2+angle3==180)
    {
        printf("it is a valid triangle\n");
    }
    else{
        printf("it is not a valid triangle\n");
    }
    printf("\n");
    // 
    int side1,side2,side3,max;
    printf("enter 3 sides of the triangle :-");
    scanf("%d %d %d",&side1,&side2,&side3);
    max=side1;
    if(side2>max){
        max=side2;
    }
    if(side3>max){
        max=side3;
    }
    if (side1+side2+side3-max>max)
    {
        printf("it is a valid triangle\n");
    }
    else{
        printf("it is not a valid triangle\n");
    }
    
}
