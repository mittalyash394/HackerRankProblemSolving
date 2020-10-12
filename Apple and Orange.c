#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int start_of_house, end_of_house, location_of_apple, location_of_orange, no_of_apple, no_of_orange, apples[100000], orange[100000], index, apple_count=0, orange_count=0;
    scanf("%d %d", &start_of_house, &end_of_house);
    scanf("%d %d", &location_of_apple, &location_of_orange);
    scanf("%d %d", &no_of_apple, &no_of_orange);
    for(index=0; index<no_of_apple; index++){
        scanf("%d", &apples[index]);
    }
    for(index=0; index<no_of_orange; index++){
        scanf("%d", &orange[index]);
    }
    if(location_of_apple < start_of_house < end_of_house < location_of_orange){
        for(index=0; index<no_of_apple; index++){
            apples[index] = apples[index] + location_of_apple;
        }
        for(index=0; index<no_of_orange; index++){
            orange[index] = orange[index] + location_of_orange;
        }
    }
    for(index=0; index<no_of_apple; index++){
        if(apples[index]>= start_of_house && apples[index] <= end_of_house){
            apple_count++;
        }
    }
    for (index=0; index<no_of_orange; index++) {
        if(orange[index] >= start_of_house && orange[index] <= end_of_house){
            orange_count++;
        }
    }
    printf("%d\n%d", apple_count, orange_count);
    return 0;
}
