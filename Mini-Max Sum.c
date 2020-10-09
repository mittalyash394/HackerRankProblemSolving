#include<stdio.h>
#include<stdlib.h>
#include <math.h>
#include <assert.h>

int main(){
    long long int size=5, indexI, indexJ, minsum=0, maxsum=0, small, first_number, large, normal;
    long long int numbers[5];
    for(indexI=0; indexI<size; indexI++){
        scanf("%lld", &numbers[indexI]);
    }
    
   //Sorting
   
   
    for(indexI=0; indexI<size; indexI++){
        for(indexJ=indexI+1; indexJ<size; indexJ++){
            if(numbers[indexI] > numbers[indexJ]){
                normal = numbers[indexI];                                         //Sorting
                numbers[indexI] = numbers[indexJ];
                numbers[indexJ] = normal;
            }
        }
    }
    for(indexI=0; indexI<size; indexI++){
        maxsum = maxsum + numbers[indexI];
        minsum = minsum + numbers[indexI];
    }
    first_number= numbers[0];
    for(indexI=0; indexI<size; indexI++){
        if(first_number < numbers[indexI]){
            large = numbers[indexI];
            small = first_number;
        }
        else if(first_number > numbers[indexI]){
            large = first_number;
            small = numbers[indexI];
        }
        else{
            large= first_number;
            small= first_number;
        }
    }
    maxsum = maxsum - small;
    minsum = minsum - large;
    printf("%lld %lld\n", minsum, maxsum);
    //printf("%d\t %d\n", small, large);
    return 0;
}
