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
    int low=0,high=n,mid=(low+high)/2;
    printf("enter element to be found :- ");
    scanf("%d",&element);
    
    while(low<high){
        mid=(low+high+1)/2;
        if(element==arr[mid]){
            printf("element found at %d",mid);
            flag=0;
            break;
        }
        
        else if(element<arr[mid]){
            high=mid-1;
        } 
        else if(element>arr[mid]){
            low=mid+1;
        }
    }
    
    if(flag){
        printf("element is not in list");
    }

    return 0;
}
