#include <stdio.h>

int main()
{
    int n;
    printf("enter size of first array\n");
    scanf("%d",&n);
    int arr[n];
    int freq[n];

    for(int i=0;i<n;i++){
        printf("enter %d element in first array :- ",i);
        scanf("%d",&arr[i]);
        freq[i]=1;
    }
    for(int i=0 ;i<n;i++){
        for(int j =i+1 ;j<n;j++){
            if(arr[i]==arr[j] && freq[i]!=-1){
                freq[i]++;
                freq[j]=-1;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(freq[i]!=-1){
            printf("frequency of %d = %d\n",arr[i],freq[i]);
        }
    }
    return 0;
}
