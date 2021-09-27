#include <stdio.h>

int main()
{
    int n=15,x=0;
    float sinx=0;
    for (int i = 1; i < n; i+=2) {
        float factorial=1;
        for (int j = 1; j<=i; j++) {
            factorial*=i;
        }
        float power=-1;
        for(int k=1;k<=i;k++){
            power*=x;
            power*=-1;
        }
        sinx+=power/factorial;
    }
    printf("%f",sinx);

    return 0;
}
