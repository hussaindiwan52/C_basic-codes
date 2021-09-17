#include<stdio.h>
int main(){
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
    if(percent>=60){
        printf("\nFirst Division");
    }
    else if(percent>=50){
        printf("\nSecond Division");
    }
    else if(percent>=40){
        printf("\nThird Division");
    }
    else{
        printf("\nfail");
    }
}
