#include <stdio.h>

int binary(int arr[],int low,int high,int num){
    
    if(low<=high){
        int mid=(low+high)/2;
        
        if(arr[mid]==num){
            return mid;
        }
        else if(arr[mid]<num){
            low=mid+1;
        }
        else if(arr[mid]>num){
           high=mid-1;
        }
        return binary(arr,low,high,num);
    }
    
    return -1;
}

int main()
{
    int num,size;
    printf("enter size of array :- ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        printf("enter %d element :- ",i);
        scanf("%d",&arr[i]);
    }
    printf("enter element to be found :-");
    scanf("%d",&num);
    int index= binary(arr,0,size-1,num);
    (index!=-1)?printf("element found at %d index",index):printf("element is not in array");

    return 0;
}
