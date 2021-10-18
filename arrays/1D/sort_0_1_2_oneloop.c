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
    
    int elem_freq[3];
    elem_freq[0]=0;
    elem_freq[1]=0;
    elem_freq[2]=0;
    
    printf("entered array = ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
    for (int i = 0; i < n; i++) {
        elem_freq[arr[i]]++;
    }
    
    int i=0;
    for(int j=0;j<elem_freq[0];j++){
        arr[i]=0;
        i++;
    }
    for(int j=0;j<elem_freq[1];j++){
        arr[i]=1;
        i++;
    }
    for(int j=0;j<elem_freq[2];j++){
        arr[i]=2;
        i++;
    }
    
  printf("\nsorted array = ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
        
    }
}
