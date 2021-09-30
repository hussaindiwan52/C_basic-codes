#include <stdio.h>

int main()
{
    int result_num=0,i=0;
    char roman[50];
    printf("enter roman numeral in capital form :- ");
    scanf("%s",roman);
    while(roman[i]!='\0'){
        if(roman[i]=='M'){
            result_num+=1000;
            i++;
            continue;
        }
        if(roman[i]=='C'&&roman[i+1]=='M'){
            result_num+=900;
            i+=2;
            continue;
        }
        if(roman[i]=='D'){
            result_num+=500;
            i++;
            continue;
        }
        if(roman[i]=='C'&&roman[i+1]=='D'){
            result_num+=400;
            i+=2;
            continue;
        }
        if(roman[i]=='C'){
            result_num+=100;
            i++;
            continue;
        }
        if(roman[i]=='X'&&roman[i+1]=='C'){
            result_num+=90;
            i+=2;
            continue;
        }
        if(roman[i]=='L'){
            result_num+=50;
            i++;
            continue;
        }
        if(roman[i]=='X'&&roman[i+1]=='L'){
            result_num+=40;
            i+=2;
            continue;
        }
        if(roman[i]=='X'){
            result_num+=10;
            i++;
            continue;
        }
        if(roman[i]=='I'&&roman[i+1]=='X'){
            result_num+=9;
            i+=2;
            continue;
        }
        if(roman[i]=='V'){
            result_num+=5;
            i++;
            continue;
        }
        if(roman[i]=='I'&&roman[i+1]=='V'){
            result_num+=4;
            i+=2;
            continue;
        }
        if(roman[i]=='I'){
            result_num+=1;
            i++;
            continue;
        }
    }
    printf("\n%s = %d",roman,result_num);

    return 0;
}
