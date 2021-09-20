#include<stdio.h>
int main(){
    char character;
    printf("enter a character :- ");
    scanf("%c",&character);
    if(character>=65 && character<=90 ){
        printf("%c is an upper case letter",character);
    }
    else if(character>=97 && character<=122 ){
        printf("%c is a lower case letter",character);
    }
    else if((character>=0 && character<=47 )||(character>=58 && character<=64 )||(character>=91 && character<=96 )||(character>=123 && character<=127 )){
        printf("%c is a special symbol",character);
    }
}
