#include <stdio.h>

int main()
{
    int n,sign=0;
    float x,cosx=0,factorial=1,power=1;
    printf("enter precision and value of angle in radians :-");
    scanf("%d %f",&n,&x);
    for (int i = 0; i < n; i++) {
        if(i%2==0){
            for (int j = i; j>=1; j--) {
                factorial*=j;
            }
            for(int k=1;k<=i;k++){
                power*=x;
            }
            if(sign==0){
                cosx+=power/factorial;
                sign++;
            }
            else{
                cosx-=power/factorial;
                sign--;
            }
            printf("%f %f  ",power,factorial);
            power=1;
            factorial=1;
        }
        
    }
    printf("cos(%f) = %f",x,cosx);

    return 0;
}
