#include <stdio.h>

int main()
{
    int n,sum=0;
    printf("enter size of array\n");
    scanf("%d",&n);
    int arr[n];
    int sum_till_n=((n+1)*(n+2))/2;
    for(int i=0;i<n;i++){
        printf("enter %d element in array :- ",i);
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("missing element = %d",sum_till_n-sum);
    return 0;
}
