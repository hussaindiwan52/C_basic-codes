#include<stdio.h>
int main(){
    int num,sum=0,stop=0;
    while(1){
        printf("\nto stop enter :- 1 else enter :-0\n");
        scanf("%d",&stop);
        if(stop==1){
            break;
        }
        printf("\nenter a number to add to sum :- ");
        scanf("%d",&num);
        sum+=num;
        printf("new sum = %d\n",sum);
        
    }
    printf("\nfinal sum= %d",sum);
}
