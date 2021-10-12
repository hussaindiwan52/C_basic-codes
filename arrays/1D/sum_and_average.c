#include <stdio.h>

int main()
{
    int n;
    printf("enter size of array:- ");
    scanf("%d",&n);
    int arr[n];
    int sum=0;
    for (int i = 0; i < n; i++) {
        printf("\nenter %d element :-",i);
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    float avg=(sum/n);
    printf("sum of all elements = %d\naverage of all elements= %f",sum,avg);
    return 0;
}
