#include<stdio.h>
#include<math.h>
long long int fact(int n){
    int ans=1;
    for (int i = 1; i <=n; i++) {
        ans*=i;
    }
    return ans;
}
long double multiplier(float n,int k){
    long double ans=n;
    for (int i = 1; i <=k; i++) {
        ans*=(n-i);
    }
    return ans;
}
int main(){
    long double root=1;
    for (int i = 0; i < 14; i++) {
        root+=(multiplier(0.5,i))/fact(i);
    }
    printf("sqrt 2 = %Lf",root);
    
    int num;
    long double root=1;
    printf("enter a number :-");
    scanf("%d",&num);
    root= pow(2,0.5*log2(num));
    printf("square root of %d = %Lf",num,root);
    return 0;
}
