#include <stdio.h>

int main()
{
    int n;
    printf("enter size of array:- ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("\nenter %d element :-",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>=arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                
            }
        }
    }
    printf("\nsecond largest element= %d\nlargest element= %d",arr[n-1],arr[n-2]);
    
    return 0;
}
