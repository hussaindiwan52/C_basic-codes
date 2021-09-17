#include<stdio.h>
int main(){
    int score;
    printf("\nmarks obtained :-");
    scanf("%d",&score);
    if(score<=100 && score>=90){
        printf("\nA");
    }
    else if(score<90 && score>=70){
        printf("\nB");
    }
    else if(score<70 && score>=60){
        printf("\nC");
    }
    else if(score<60 && score>=50){
        printf("\nD");
    }
    else{
        printf("\nF");
    }
}
