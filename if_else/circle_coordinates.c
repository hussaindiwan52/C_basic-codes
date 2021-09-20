#include<stdio.h>
int main(){
    int x,y,r,h,k;
    printf("enter center of the circle and its radius :- ");
    scanf("%d %d %d",&h,&k,&r);
    printf("enter the point to be checked :- ");
    scanf("%d %d",&x,&y);
    int circle=(x-h)*(x-h)+(y-k)*(y-k)-r*r;
    if(circle==0){
        printf("point is on the circle.");
    }
    else if(circle<0){
        printf("point is inside the circle.");
    }
    else{
        printf("point is outside the circle.");

    }
}
