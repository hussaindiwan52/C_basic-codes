#include<stdio.h>
int main(){
    int num2,n=0;
    printf("enter a number:- ");
    scanf("%d",&num2);
    printf("\n");
    int flag=0;
    if(num2>=1000){
        n=num2/1000;
        num2%=1000;
        printf("%d*M ",n);
        flag=1;
    }
      if(num2>=900){
        if(flag==1){
            printf(" + ");
        }
        n=num2/900;
        num2%=900;
        flag=1;
        printf("%d*CM ",n);
    }
      if(num2>=500){
        if(flag==1){
            printf(" + ");
        }
        n=num2/500;
        num2%=500;
        flag=1;
        printf("%d*D ",n);
    }
      if(num2>=400){
        if(flag==1){
            printf(" + ");
        }
        n=num2/400;
        num2%=400;
        flag=1;
        printf("%d*CD ",n);
    }
      if(num2>=100){
        if(flag==1){
            printf(" + ");
        }
        n=num2/100;
        num2%=100;
        flag=1;
        printf("%d*C ",n);
    }
      if(num2>=90){
        if(flag==1){
            printf(" + ");
        }
        n=num2/90;
        num2%=90;
        flag=1;
        printf("%d*XC ",n);
    }
      if(num2>=50){
        if(flag==1){
            printf(" + ");
        }
        n=num2/50;
        num2%=50;
        flag=1;
        printf("%d*L ",n);
    }
      if(num2>=40){
        if(flag==1){
            printf(" + ");
        }
        n=num2/40;
        num2%=40;
        flag=1;
        printf("%d*XL ",n);
    }
      if(num2>=10){
        if(flag==1){
            printf(" + ");
        }
        n=num2/10;
        num2%=10;
        flag=1;
        printf("%d*X ",n);
    }
      if(num2>=9){
        if(flag==1){
            printf(" + ");
        }
        n=num2/9;
        num2%=9;
        flag=1;
        printf("%d*IX ",n);
    }
      if(num2>=5){
        if(flag==1){
            printf(" + ");
        }
        n=num2/5;
        num2%=5;
        flag=1;
        printf("%d*V ",n);
    }
      if(num2>=4){
        if(flag==1){
            printf(" + ");
        }
        n=num2/4;
        num2%=4;
        flag=1;
        printf("%d*IV ",n);
    }
      if(num2>=1){
        if(flag==1){
            printf(" + ");
        }
        n=num2/1;
        num2%=1;
        flag=1;
        printf("%d*I ",n);
    }
    


}
