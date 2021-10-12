#include <stdio.h>

int main()
{
    int n,temp;
    printf("enter size of array\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter %d element in array :- ",i);
        scanf("%d",&arr[i]);
    }
    int end=0;
    for (int i = 0; i < n-end; i++) {
        if(arr[i]==0){
            temp=arr[i];
            end++;
            for(int j= i;j<n-1;j++){
                arr[j]=arr[j+1];
            }
            arr[n-1]=temp;
            i--;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
