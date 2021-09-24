
#include <stdio.h>
#include<math.h>
int main()
{
    int num;
    long double root=1;
    printf("enter a number :-");
    scanf("%d",&num);
    root= pow(2,0.5*log2(num));
    printf("square root of %d = %Lf",num,root);
    return 0;
}
