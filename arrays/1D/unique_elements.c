#include <stdio.h>

int main()
{
    int n;
    printf("enter size of array:- ");
    scanf("%d",&n);
    int arr[n];
    int flag=0;
    for (int i = 0; i < n; i++) {
        printf("\nenter %d element :-",i);
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++) {
        flag=0;
        for(int j = 0 ;j < n;j++){
            if(arr[i]==arr[j] && i!=j){
                flag=1;
            }
        }
        if(flag==0){
            printf(" unique element = %d\n",arr[i]);
        }
    }
}
