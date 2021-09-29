#include<stdio.h>
int main(){
    int num;
    printf("enter a number:- ");
    scanf("%d",&num);
    char roman[][3]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    int roman_values[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
    int place_values[]={0,0,0,0,0,0,0,0,0,0,0,0,0};
    for (int i = 0; i < 13; i++)
    {
        place_values[i]=num/roman_values[i];
        num=num%roman_values[i]; 
        if(place_values[i]!=0){
            for (int j = 0; j < place_values[i]; j++)
            {
                printf("%s",roman[i]);
            }
            
        }
    }
}
