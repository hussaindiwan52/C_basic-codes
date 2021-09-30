#include <stdio.h>

int main()
{   int row=7;
    for (int i = 0; i < row; i++) {
        for (int j = row; j>i; j--) {
            printf("* ");
        }
        for (int j = 0; j<i; j++) {
            printf("  ");
        }
        for (int j = 1; j<=i; j++) {
            printf("  ");
        }
        for (int j = row; j>i; j--) {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j<=i; j++) {
            printf("* ");
        }
        for (int j = row-1; j>i; j--) {
            printf("  ");
        }
        for (int j = row; j>i+1; j--) {
            printf("  ");
        }
        for (int j = 0; j<=i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    
}
