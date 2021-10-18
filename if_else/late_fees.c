#include <stdio.h>

int main()
{
    int time_late,late_fee=0;
    printf("How late was the student :- ");
    scanf("%d",&time_late);
    if(time_late>0 && time_late<=3){
        late_fee=(100*(time_late));
    }
    
    else if(time_late>3 && time_late<=7){
        late_fee=300 + (150*(time_late-3));
    }
    
    else if(time_late>7 && time_late<=10){
        late_fee=900 + (250*(time_late-7));
    }
    
    else if(time_late>10){
        late_fee=1650 + (500*(time_late-10));
    }
    
    printf("late fees = %d",late_fee);
    
}
