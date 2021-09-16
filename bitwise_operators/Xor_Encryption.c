#include <stdio.h>
#define decrypt 555
int main()
{
    int n;
    char str[50];
    printf("enter string to be encrypted :-");
    scanf("%s",&str);
    for(int i=0;i<50;i++){
        str[i]=str[i]^decrypt;
    }
    printf("string after encryption is = %s\n",str);
    printf("\nenter decryption key :-");
    scanf("%d",&n);
    for(int i=0;i<50;i++){
        str[i]=str[i]^n;
    }    
    printf("string after decryption is = %s\n",str);

}
