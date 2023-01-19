#include<stdio.h>
int birthdayCakeCandles(int candles_count, int* candles) {
    int candleHeight = candles_count, count=1;
    for(int i = 0; i<candleHeight; i++){
        for(int j = i+1; j<candleHeight; j++){
            if(candles[i]<candles[j]){
                int temp = candles[i];
                candles[i] = candles[j];
                candles[j] = temp;
            }
        }
    }
    for(int i = 1; i<candleHeight; i++){
        if(candles[0]==candles[i]){
            count++;
        }
    }
    return count;
}
void main(){
    int candle[] = {3,2,1,3};
    int dat = birthdayCakeCandles(4, candle);
    printf("%d", dat);
}