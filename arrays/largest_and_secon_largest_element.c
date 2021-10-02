#include <stdio.h>

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
    int f_largest=arr[0];
    int s_largest=arr[0];
    for (int i = 1; i < n; i++) {
        if(arr[i]>f_largest){
            s_largest=f_largest;
            f_largest=arr[i];
        }
        if(arr[i]>s_largest&&arr[i]<s_largest){
            s_largest=arr[i];
        }
    }
    printf("\nsecond largest element= %d\nlargest element= %d",s_largest,f_largest);
    
    return 0;
}
