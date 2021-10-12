#include <stdio.h>

int main()
{
    int n;
    printf("enter size of array\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter %d element\n",i);
        scanf("%d",&arr[i]);
    }
    printf("in original order:- ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\nin reverse :- ");
    for(int i=n-1;i>=0;i--){
        printf("%d ",arr[i]);
    }

    return 0;
}
