#include <stdio.h>

int addToTotal(int valueToAdd)
{
    static int accumulatedTotal = 0;

    accumulatedTotal += valueToAdd;

    return accumulatedTotal;
}

int main(void)
{
    int numberOfIterations;
    int accumulatedResult = 0;

    scanf("%d", &numberOfIterations);

    if (numberOfIterations < 1 || numberOfIterations > 10)
    {
        printf("NG");
        return 0;
    }
    for (int iteration = 1; iteration <= numberOfIterations; iteration++)
    {
        accumulatedResult = addToTotal(iteration * 2);
    }

    printf("%d", accumulatedResult);

    return 0;
}
