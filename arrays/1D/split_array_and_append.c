#include <stdio.h>

int main()
{
    int n,index,temp;
    printf("enter size of array\n");
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        printf("enter %d element in array :- ",i);
        scanf("%d",&arr[i]);
    }
    
    printf("enter index before which to split\n");
    scanf("%d",&index);
    
    for(int j = 0; j < index; j++){
        temp=arr[0];
        for (int i = 0; i < n; i++) {
            arr[i]=arr[i+1];
        }
        arr[n-1]=temp;
    }
    
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
