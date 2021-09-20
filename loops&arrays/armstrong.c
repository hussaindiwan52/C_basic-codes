#include<stdio.h>
int main(){
    int digit,armstrong=0,iclone;
    for (int i = 1; i <=500; i++)
    {
        armstrong=0;
        iclone=i;
        while(iclone!=0){
            digit=iclone%10;
            iclone/=10;
            armstrong+=digit*digit*digit;
        }
        if (armstrong==i)
        {
            printf("%d\n",armstrong);
        }
    }
    

}
