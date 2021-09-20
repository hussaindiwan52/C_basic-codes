#include<stdio.h>
int main(){
    int ram,shyam,ajay; 
    printf("enter the ages of ram , shyam and ajay :-");
    scanf("%d %d %d",&ram,&shyam,&ajay);
    if (ram<=shyam && ram<=ajay)
    {
        printf("youngest is ram\n");
    }
    if (shyam<=ram && shyam<=ajay)
    {
        printf("youngest is shyam\n");
    }
    if (ajay<=shyam && ajay<=shyam)
    {
        printf("youngest is ajay\n");
    }
}
