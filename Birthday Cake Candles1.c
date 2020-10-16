#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define SIZE 1000000
int main(){
    long int n, candles[SIZE]; int indexI, count=0, number;
    //printf("Enter the no of arrays\n");
    scanf("%ld",&n);
    for(indexI=0; indexI<n; indexI++){
        scanf("%ld",&candles[indexI]);
    }
    for(indexI=0; indexI<n; indexI++){
        if(candles[0] <= candles[indexI]){
            number = candles[indexI];
        }
    }
    for(indexI=0; indexI<n; indexI++){
        if(number == candles[indexI]){
            count++;
        }
    }
    printf("%d",count);
    //printf("%d", number);
    return 0;
}
