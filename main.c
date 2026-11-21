#include <stdio.h>
/* 合計値を保持しながら加算する関数 */
int addaToTotal(int valueToAdd)
{
    /* static変数は関数終了後も値を保持する */
    static int accumulatedTotal=0;
    accumulatedTotal+=valueToAdd;
    return accumulatedTotal;
}
int main(void)
{
    int numberOfiterations;
    int accumulatedResult=0;
    scanf("%d",&numberOfiterations);
    /* 入力値が1～10の範囲外ならNGを表示する */
    if(numberOfiterations<1||numberOfiterations>10)
    {
        printf("NG");
        return 0;
    }
    /* 2から2ずつ増やしながら合計する */
    for(int iteration=1;iteration<=numberOfiterations;iteration++)
    {
        accumulatedResult=addaToTotal(iteration*2);
    }
    printf("%d",accumulatedResult);
    
    return 0;
}
