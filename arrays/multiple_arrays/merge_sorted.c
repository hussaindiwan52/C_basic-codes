#include <stdio.h>

int main()
{
    int n1,n2;
    
    printf("enter size of first array\n");
    scanf("%d",&n1);
    int arr1[n1];
    for(int i=0;i<n1;i++){
        printf("enter %d element in first array :- ",i);
        scanf("%d",&arr1[i]);
    }
    
    printf("enter size of first array\n");
    scanf("%d",&n2);
    int arr2[n2];
    for(int i=0;i<n2;i++){
        printf("enter %d element in second array :- ",i);
        scanf("%d",&arr2[i]);
    }
    
    int arr3[n1+n2];
    int arr1_i=0;
    int arr2_i=0;
    int arr3_i=0;
    while(arr1_i<n1 && arr2_i<n2){
        if(arr1[arr1_i]<arr2[arr2_i]){
            arr3[arr3_i]=arr1[arr1_i];
            arr1_i++;
        }
        else{
            arr3[arr3_i]=arr2[arr2_i];
            arr2_i++;
        }
        arr3_i++;
    }
    while(arr1_i<n1){
        arr3[arr3_i]=arr1[arr1_i];
        arr1_i++;
        arr3_i++;
    }
    while(arr2_i<n2){
        arr3[arr3_i]=arr2[arr2_i];
        arr2_i++;
        arr3_i++;
    }
    
    printf("\nthird array after merging first array to second and sorting is :- ");
    
    for(int i=0;i<n1+n2;i++){
        printf("%d ",arr3[i]);
    }
    
    

    return 0;
}
