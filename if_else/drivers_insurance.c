#include<stdio.h>
int main(){
    int is_married,age;
    char gender;
    printf("if married enter 1 else enter 0 :- ");
    scanf("%d",&is_married);
    printf("\nenter age :- ");
    scanf("%d",&age);
    fflush(stdin);
    printf("\nenter gender :- ");
    scanf("%c",&gender);
    if(is_married==1 || (is_married==0 && (gender=='m'||gender=='M') && age>30) || (is_married==0 && (gender=='f'||gender=='F') && age>25)){
        printf("\nDriver is insured");
    }
    else{
        printf("\nDriver is not insured");
    }
}
