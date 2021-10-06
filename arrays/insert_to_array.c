#include <stdio.h>

int main()
{
    int n;
    printf("enter size of array\n");
    scanf("%d",&n);
    int n_e,n_i;
    int arr[100];
    for(int i=0;i<n;i++){
        printf("enter %d element in first array :- \n",i);
        scanf("%d",&arr[i]);
    }
    printf("\nenter value to be added and its location :-\n");
    scanf("%d",&n_e);
    scanf("%d",&n_i);
    for (int i = n; i >n_i; i--) {
        arr[i]=arr[i-1];
    }
    arr[n_i]=n_e;
    
    printf("array after value is inserted :- ");
    for(int i=0;i<n+1;i++){
        printf("%d ",arr[i]);
    }
}
