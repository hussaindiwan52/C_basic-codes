#include <stdio.h>

int main()
{
    int n;
    printf("enter size of first array\n");
    scanf("%d",&n);
    int arr1[n];
    int arr2[n];
    for(int i=0;i<n;i++){
        printf("enter %d element in first array :- ",i);
        scanf("%d",&arr1[i]);
    }
    
    for(int i=0;i<n;i++){
        arr2[i]=arr1[i];
    }
    printf("\nelements in second array after copying = ");
    for(int i=0;i<n;i++){
        printf("%d ",arr2[i]);
    }
    
    int n2;
    printf("\nenter size of third array\n");
    scanf("%d",&n2);
    int arr3[n2+n];
    for(int i=0;i<n2;i++){
        printf("enter %d element in third array:- ",i);
        scanf("%d",&arr3[i]);
    }
    for(int i=n2 ;i<n+n2;i++){
        arr3[i]=arr1[i-n2];
    }
    printf("\nthird array after appending first array to it is :- ");
    for(int i=0;i<n2+n;i++){
        printf("%d ",arr3[i]);
    }
    
    

    return 0;
}
