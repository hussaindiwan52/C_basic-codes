// https://www.hackerrank.com/contests/c-batch-530-test-2/challenges/sum-of-sub-array/submissions/code/1338736007
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int len,sumnum;
    scanf("%d %d",&len,&sumnum);
    int arr[len];
    for(int i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }
    int found=0;
    int current_first=0;
    int current_last=0;
    int sum=0;
    while(current_first<len && current_last<len && !found){
        sum+=arr[current_last];
        current_last++;
        if(sum>sumnum){
            current_first++;
            current_last=current_first;
            sum=0;
        }
        else if(sum==sumnum){
            printf("%d %d",current_first+1,current_last);
            found=1;
        }
    }
    
    if(!found){
        printf("-1");
    }
    return 0;
}
