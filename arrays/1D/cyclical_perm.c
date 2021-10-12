#include <stdio.h>

int main()
{
    int n;
    printf("enter size of array\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter %d element in first array :- ",i);
        scanf("%d",&arr[i]);
    }
    printf("all cyclical permutations are :- \n");
    for(int j = 0;j<n;j++){
        printf("\n");
        int temp= arr[0];
        for (int i = 0; i < n; i++) {
            arr[i]=arr[i+1];
        }
        arr[n-1]=temp;
        for(int k=0;k<n;k++){
            printf("%d ",arr[k]);
        }
    }
}
