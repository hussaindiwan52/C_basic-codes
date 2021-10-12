#include <stdio.h>

int main()
{
    int n;
    printf("enter size of first array\n");
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        printf("enter %d element in first array :- ",i);
        scanf("%d",&arr[i]);
    }
    int count_freq=0;
    for(int i=0 ;i<n;i++){
        for(int j =i+1 ;j<n;j++){
            if(arr[i]==arr[j]){
                count_freq++;
                break;
            }
        }
    }
    printf("\n%d",count_freq);
    return 0;
}
