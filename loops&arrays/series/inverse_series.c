#include<stdio.h>
int main(){
    int n;
    float sum=0;
    printf("enter number :-");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        sum+=1.0/i;
    }
    printf("inverse sum= %f",sum);
    
}
