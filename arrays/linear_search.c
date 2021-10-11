#include <stdio.h>

int main()
{
    int n,element,flag=0;
    printf("enter size of array\n");
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        printf("enter %d element in array :- ",i);
        scanf("%d",&arr[i]);
    }
    
    printf("enter element to be searched\n");
    scanf("%d",&element);
    
    for (int i = 0; i < n; i++) {
        if(element==arr[i]){
            flag=1;
            printf("element first found at %d index",i);
            break;
        }
    }
    if(!flag){
        printf("element not found in array");
    }
    
}
