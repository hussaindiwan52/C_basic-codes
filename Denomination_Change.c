#include <stdio.h>
int main()
{
    int money;
    printf("enter amount of money :- ");
    scanf("%d", &money);
    int denomination[] = {100, 50, 10, 1};
    int bills[] = {0, 0, 0, 0};
    for (int i = 0; i < 4; i++)
    {
        bills[i] = money / denomination[i];
        money = money % denomination[i];
    }
    printf("\nThe change is:- \n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d bills of rupees %d \n", bills[i], denomination[i]);
    }
    printf("remaining amount is:-%d",bills[3], denomination[3]);
}
