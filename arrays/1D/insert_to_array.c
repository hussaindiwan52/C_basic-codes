#include <stdio.h>

int main()
{
    int n;
    printf("enter size of array\n");
    scanf("%d",&n);
    int new_elem,new_index;
    int arr[100];
    for(int i=0;i<n;i++){
        printf("enter %d element in first array :- \n",i);
        scanf("%d",&arr[i]);
    }
    printf("\nenter value to be added and its location :-\n");
    scanf("%d",&new_elem);
    scanf("%d",&new_index);
    for (int i = n; i >new_index; i--) {
        arr[i]=arr[i-1];
    }
    arr[n_i]=new_elem;
    
    printf("array after value is inserted :- ");
    for(int i=0;i<n+1;i++){
        printf("%d ",arr[i]);
    }
}
