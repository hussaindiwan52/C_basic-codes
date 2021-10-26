#include <stdio.h>

int main()
{
    int n;
    printf("enter size :- ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("enter %d element :- ",i);
        scanf("%d",&arr[i]);
    }
    
    int element;
    int flag=1;
    printf("enter element to be found :- ")
    scanf("%d",&element);
    
    for (int i = 0; i < n; i++) {
        if(element==arr[i]){
            printf("element found at %d index",i);
            flag=0;
        }
    }
    
    if(flag){
        printf("element is not in list");
    }

    return 0;
}
