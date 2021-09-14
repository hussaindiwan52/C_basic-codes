#include <stdio.h>
#define decrypt 5
int main()
{
    int num,n,encrypted_num;
    printf("enter number to be encrypted :-");
    scanf("%d",&num);
    encrypted_num=num^decrypt;
    printf("number after encryption is = %d\n",encrypted_num);
    printf("\nenter decryption key :-");
    scanf("%d",&n);
    encrypted_num=encrypted_num^(n);
    printf("number after decryption is = %d\n",encrypted_num);

}
