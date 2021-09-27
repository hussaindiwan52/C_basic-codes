#include <stdio.h>

int main()
{
    int n,sign=0;
    float x,sinx=0,factorial=1,power=1;
    printf("enter precision and value of angle in radians :-");
    scanf("%d %f",&n,&x);
    for (int i = 1; i < n; i++) {
        if(i%2!=0){
            for (int j = i; j>=1; j--) {
                factorial*=j;
            }
            for(int k=1;k<=i;k++){
                power*=x;
            }
            if(sign==0){
                sinx+=power/factorial;
                sign++;
            }
            else{
                sinx-=power/factorial;
                sign--;
            }
            printf("%f %f",power,factorial);
            power=1;
            factorial=1;
        }
        
    }
    printf("sin(%f) = %f",x,sinx);

    return 0;
}
