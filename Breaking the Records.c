#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main(){
    int n, scores[100000], index=0, highest_digit, lowest_digit, high_digit_count=0, low_digit_count=0;
    scanf("%d", &n);
    for(index=0; index<n; index++){
        scanf("%d", &scores[index]);
    }
    highest_digit = scores[0];
    lowest_digit = scores[0];
    for(index=0; index<n; index++){
        if(highest_digit < scores[index]){
            highest_digit = scores[index];
            high_digit_count++;
        }
        if(lowest_digit > scores[index]){
            lowest_digit = scores[index];
            low_digit_count++;
        }
    }
    printf("%d %d", high_digit_count, low_digit_count);
    return 0;
}
