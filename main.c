#include <stdio.h>
int addaToTotal(int valueToAdd)
{
    static int accumulatedTotal=0;
    accumulatedTotal+=valueToAdd;
    return accumulatedTotal;
}
int main(void)
{
    int numberOfiterations;
    int accumulatedResult=0;
    scanf("%d",&numberOfiterations);
    if(numberOfiterations<1||numberOfiterations>10)
    {
        printf("NG");
        return 0;
    }
    for(int iteration=1;iteration<=numberOfiterations;iteration++)
    {
        accumulatedResult=addaToTotal(iteration*2);
    }
    printf("%d",accumulatedResult);
    
    return 0;
}
