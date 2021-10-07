#include <stdio.h>

int main()
{
    char arr[100];
    printf("enter string in lower case :- ");
    scanf("%s",&arr);
    int i=0;
    while(arr[i]!='\0'){
        int j=i+1;
        while(arr[j]!='\0'){
            if(arr[i]>=arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                
            }
            j++;
        }
        i++;
    }
    printf("sorted string = %s",arr);
}
