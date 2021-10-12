#include <stdio.h>

int main()
{
    int n;
    printf("enter size of array\n");
    scanf("%d",&n);
    int n_e,n_i;
    printf("\nenter location to be deleted :-\n");
    scanf("%d",&n_i);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter %d element in first array :- ",i);
        scanf("%d",&arr[i]);
    }
    for (int i = n_i; i<n; i++) {
        arr[i]=arr[i+1];
    }
    for(int i=0;i<n-1;i++){
        printf("%d ",arr[i]);
    }
}
