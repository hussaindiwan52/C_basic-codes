#include <stdio.h>

int main()
{
    char str[100];
    printf("enter string :- ");
    scanf("%s",str);
    
    int i=0;
    int j=1;
    int count=1;
    while(str[i]!='\0'){
        if(str[i]==str[j]){
            count++;
            j++;
        }
        else{
            printf("%d%c ",count,str[i]);
            i=j;
            j++;
            count=1;
        }
    }
    
    return 0;
}
