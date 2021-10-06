#include <stdio.h>

int main()
{
    int n;
    printf("enter size of array\n");
    scanf("%d",&n);
    int arr1[n];
    int arr2[n];
    for(int i=0;i<n;i++){
        printf("enter %d element in first array :- ",i);
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<n;i++){
        printf("enter %d element in second array :- ",i);
        scanf("%d",&arr2[i]);
    }
    int arr3[n+n];
    int arr1_count=0;
    int arr2_count=0;
    for(int i=0;i<n;i++){
        arr3[i]=arr1[i];
        arr3[i+n]=arr2[i];
    }
    
    for(int i=0;i<n+n;i++){
        for(int j=i+1;j<n+n;j++){
            if(arr3[i]<=arr3[j]){
                int temp=arr3[i];
                arr3[i]=arr3[j];
                arr3[j]=temp;
                
            }
        }
    }
    printf("\nthird array after merging first array to second and sorting is :- ");
    
    for(int i=0;i<n+n;i++){
        printf("%d ",arr3[i]);
    }
    
    

    return 0;
}
