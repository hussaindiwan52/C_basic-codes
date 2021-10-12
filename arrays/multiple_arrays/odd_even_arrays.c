#include <stdio.h>

int main()
{
    int n;
    printf("enter size of array:- ");
    scanf("%d",&n);
    int arr[n],odd[n],even[n];
    int oddcount=0,evencount=0;
    for (int i = 0; i < n; i++) {
        printf("\nenter %d element :-",i);
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            even[evencount]=arr[i];
            evencount++;
        }
        else{
            odd[oddcount]=arr[i];
            oddcount++;
        }
    }
    printf("\neven elements are :- ");
    for (int i = 0; i < evencount; i++) {
        printf("%d  ",even[i]);
    }
    printf("\nodd elements are :- ");
    for (int i = 0; i < oddcount; i++) {
        printf("%d  ",odd[i]);
    }
    return 0;
}
