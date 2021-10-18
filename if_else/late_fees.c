#include <stdio.h>

int main()
{
    int time_late,late_fee=0;
    printf("How late was the student :- ");
    scanf("%d",&time_late);
    if(time_late>0){
        late_fee=(100*((time_late<4)?time_late:3));
    }
    
    if(time_late>3){
        late_fee=300 + (150*((time_late<8)?time_late-3:7));
    }
    
    if(time_late>7){
        late_fee=900 + (250*((time_late<11)?time_late-7:10));
    }
    
    if(time_late>10){
        late_fee=1650 + (500*(time_late-10));
    }
    
    printf("%d",late_fee);
    
}
