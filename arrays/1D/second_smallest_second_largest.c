#include <stdio.h>
#include<limits.h>

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
    int largest=arr[0];
    int second_largest=INT_MIN;
    int smallest=arr[0];
    int second_smallest=INT_MAX;
    for (int i = 0; i < n; i++) {
        if(arr[i]>largest){
            second_largest=largest;
            largest=arr[i];
        }
        if(arr[i]>second_largest && arr[i]<largest){
            second_largest=arr[i];
        }
        if(arr[i]<smallest){
            second_smallest=smallest;
            smallest=arr[i];
        }
        if(arr[i]<second_smallest && arr[i]>smallest){
            second_smallest=arr[i];
        }
    }
    
    printf("\nsecond largest element= %d\nlargest element= %d",second_largest,largest);
    printf("\nsecond smallest element= %d\nsmallest element= %d",second_smallest,smallest);
    
    return 0;
}
