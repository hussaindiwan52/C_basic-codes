#include<stdio.h>
int main(){
    int x,y;
    printf("enter two points :-  ");
    scanf("%d %d",&x,&y);
    if (x==0 && y==0)
    {
        printf("point is ont he origin");
    }
    else if(x==0){
        printf("point is on the y axis");
    }
    else if(y==0){
        printf("point is on the x axis");
    }
    else if(x>0&&y>0){
        printf("point is in the 1st quadrant");
    }
    else if(x<0&&y>0){
        printf("point is in the 2nd quadrant");
    }
    else if(x<0&&y<0){
        printf("point is in the 3rd quadrant");
    }
    else if(x>0&&y<0){
        printf("point is in the 4th quadrant");
    }
}
