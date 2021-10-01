#include <stdio.h>

int main()
{
    char str[100];
    printf("enter your string:- ");
    scanf("%s",str);
    int n=0;
    while(str[n++]!='\0');
    char temp=' ';
    int end=0;
    for (int i = 0; i < n-1-end; i++) {
        if(str[i]>='A' && str[i]<='Z'){
            temp=str[i];
            end++;
            for(int j= i;j<n-2;j++){
                str[j]=str[j+1];
            }
            str[n-2]=temp;
            i--;
        }
    }
    printf("%s",str);

    return 0;
}
