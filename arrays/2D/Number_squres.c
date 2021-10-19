#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	int pattern[2*n-1][2*n-1];
    for (int i=0; i<2*n-1; i++) {
        for (int j=0;j<2*n-1;j++){
            pattern[i][j]=0;
        }
    }
    for (int i=0; i<=n-1; i++) {
        pattern[n-1][i]=n-i;
        pattern[n-1][2*n-2-i]=n-i;
    }
    for (int i=0; i<=n-1; i++) {
        pattern[i][n-1]=n-i;
        pattern[2*n-2-i][n-1]=n-i;
    }
   for (int i=0; i<2*n-1; i++) {
        for (int j=0;j<2*n-1;j++){
            if (pattern[i][j]==0) {
                pattern[i][j]=pattern[n-1][j];
            }
        }
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n-1;j++){
            pattern[i][j]=n-i;
            pattern[i][2*n-2-j]=n-i;
            pattern[2*n-2-i][j]=n-i;
            pattern[2*n-2-i][2*n-2-j]=n-i;
        }
    }
    for (int i=0; i<2*n-1; i++) {
        for (int j=0;j<2*n-1;j++){
            printf("%d ",pattern[i][j]);
        }
        printf("\n");
    }
    return 0;
}
