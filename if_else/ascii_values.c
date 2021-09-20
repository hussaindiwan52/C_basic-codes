#include<stdio.h>
int main(){
    char character1;
    printf("enter a character :- ");
    scanf("%c",&character1);
    if(character1>=65 && character1<=90 ){
        printf("%c is an upper case letter",character1);
    }
    else if(character1>=97 && character1<=122 ){
        printf("%c is a lower case letter",character1);
    }
    else if((character1>=0 && character1<=47 )||(character1>=58 && character1<=64 )||(character1>=91 && character1<=96 )||(character1>=123 && character1<=127 )){
        printf("%c is a special symbol",character1);
    }
    printf("\n");
    // 
    fflush(stdin);
    char character2;
    printf("enter a character :- ");
    scanf("%c",&character2);
    (character2>=97 && character2<=122 )?printf("\n%c is a lower case letter using ternary operator",character2):printf("\n%c is not a lower case letter using ternary operator",character2);
    ((character2>=0 && character2<=47 )||(character2>=58 && character2<=64 )||(character2>=91 && character2<=96 )||(character2>=123 && character2<=127 ))?printf("\n%c is a special symbol using ternary operator",character2):printf("\n%c is not a special symbol using ternary operator",character2);
}
